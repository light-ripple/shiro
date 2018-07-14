#include <algorithm>
#include <curl/curl.h>

#include "../config/geonames_file.hh"
#include "../thirdparty/loguru.hh"
#include "country_ids.hh"
#include "geoloc.hh"

uint8_t shiro::geoloc::get_country(float longitude, float latitude) {
    CURL *curl = curl_easy_init();
    CURLcode status_code;

    std::string output;

    if (curl != nullptr) {
        char buffer[512];
        std::snprintf(buffer, sizeof(buffer), "http://api.geonames.org/countryCode?lng=%f&lat=%f&username=%s", longitude, latitude, config::geonames::username.c_str());

        curl_easy_setopt(curl, CURLOPT_URL, buffer);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &output);
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "shiro (https://github.com/Marc3842h/shiro)");

        status_code = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (status_code != CURLE_OK) {
            LOG_F(ERROR, "Received invalid response from geonames.org: %s", curl_easy_strerror(status_code));
            return (uint8_t) country_id::JP;  // Default to Japan because we're weebs ¯\_(ツ)_/¯
        }
    }

    if (output.find("ERR") != std::string::npos) {
        LOG_F(ERROR, "Received invalid response from geonames.org: %s", output.c_str());
        return (uint8_t) country_id::JP;  // Default to Japan because we're weebs ¯\_(ツ)_/¯
    }

    std::transform(output.begin(), output.end(), output.begin(), ::toupper);
    output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
    output.erase(std::remove_if(output.begin(), output.end(), ::isspace), output.end());

    return get_country_id(output);
}

size_t shiro::geoloc::callback(void *raw_data, size_t size, size_t memory, std::string *ptr) {
    size_t new_length = size * memory;
    size_t old_length = ptr->size();

    try {
        ptr->resize(old_length + new_length);
    } catch (const std::bad_alloc &ex) {
        LOG_F(ERROR, "Unable to allocate new memory for callback of geo location service: %s.", ex.what());
        return 0;
    }

    std::copy((char*) raw_data, (char*) raw_data + new_length, ptr->begin() + old_length);
    return size * memory;
}
