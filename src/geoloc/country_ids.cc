#include <algorithm>

#include "../thirdparty/loguru.hh"
#include "country_ids.hh"

std::unordered_map<std::string, uint8_t> shiro::geoloc::countries;

void shiro::geoloc::init() {
    countries.insert(std::make_pair<std::string, uint8_t>("AD", (uint8_t) country_id::AD));
    countries.insert(std::make_pair<std::string, uint8_t>("AF", (uint8_t) country_id::AF));
    countries.insert(std::make_pair<std::string, uint8_t>("AI", (uint8_t) country_id::AI));
    countries.insert(std::make_pair<std::string, uint8_t>("AL", (uint8_t) country_id::AL));
    countries.insert(std::make_pair<std::string, uint8_t>("AM", (uint8_t) country_id::AM));
    countries.insert(std::make_pair<std::string, uint8_t>("AO", (uint8_t) country_id::AO));
    countries.insert(std::make_pair<std::string, uint8_t>("AQ", (uint8_t) country_id::AQ));
    countries.insert(std::make_pair<std::string, uint8_t>("AR", (uint8_t) country_id::AR));
    countries.insert(std::make_pair<std::string, uint8_t>("AS", (uint8_t) country_id::AS));
    countries.insert(std::make_pair<std::string, uint8_t>("AT", (uint8_t) country_id::AT));
    countries.insert(std::make_pair<std::string, uint8_t>("AU", (uint8_t) country_id::AU));
    countries.insert(std::make_pair<std::string, uint8_t>("AW", (uint8_t) country_id::AW));
    countries.insert(std::make_pair<std::string, uint8_t>("AZ", (uint8_t) country_id::AZ));
    countries.insert(std::make_pair<std::string, uint8_t>("BB", (uint8_t) country_id::BB));
    countries.insert(std::make_pair<std::string, uint8_t>("BD", (uint8_t) country_id::BD));
    countries.insert(std::make_pair<std::string, uint8_t>("BE", (uint8_t) country_id::BE));
    countries.insert(std::make_pair<std::string, uint8_t>("BF", (uint8_t) country_id::BF));
    countries.insert(std::make_pair<std::string, uint8_t>("BG", (uint8_t) country_id::BG));
    countries.insert(std::make_pair<std::string, uint8_t>("BH", (uint8_t) country_id::BH));
    countries.insert(std::make_pair<std::string, uint8_t>("BI", (uint8_t) country_id::BI));
    countries.insert(std::make_pair<std::string, uint8_t>("BJ", (uint8_t) country_id::BJ));
    countries.insert(std::make_pair<std::string, uint8_t>("BM", (uint8_t) country_id::BM));
    countries.insert(std::make_pair<std::string, uint8_t>("BO", (uint8_t) country_id::BO));
    countries.insert(std::make_pair<std::string, uint8_t>("BR", (uint8_t) country_id::BR));
    countries.insert(std::make_pair<std::string, uint8_t>("BS", (uint8_t) country_id::BS));
    countries.insert(std::make_pair<std::string, uint8_t>("BT", (uint8_t) country_id::BT));
    countries.insert(std::make_pair<std::string, uint8_t>("BV", (uint8_t) country_id::BV));
    countries.insert(std::make_pair<std::string, uint8_t>("BW", (uint8_t) country_id::BW));
    countries.insert(std::make_pair<std::string, uint8_t>("BY", (uint8_t) country_id::BY));
    countries.insert(std::make_pair<std::string, uint8_t>("BZ", (uint8_t) country_id::BZ));
    countries.insert(std::make_pair<std::string, uint8_t>("CA", (uint8_t) country_id::CA));
    countries.insert(std::make_pair<std::string, uint8_t>("CC", (uint8_t) country_id::CC));
    countries.insert(std::make_pair<std::string, uint8_t>("CF", (uint8_t) country_id::CF));
    countries.insert(std::make_pair<std::string, uint8_t>("CH", (uint8_t) country_id::CH));
    countries.insert(std::make_pair<std::string, uint8_t>("CK", (uint8_t) country_id::CK));
    countries.insert(std::make_pair<std::string, uint8_t>("CL", (uint8_t) country_id::CL));
    countries.insert(std::make_pair<std::string, uint8_t>("CM", (uint8_t) country_id::CM));
    countries.insert(std::make_pair<std::string, uint8_t>("CN", (uint8_t) country_id::CN));
    countries.insert(std::make_pair<std::string, uint8_t>("CO", (uint8_t) country_id::CO));
    countries.insert(std::make_pair<std::string, uint8_t>("CR", (uint8_t) country_id::CR));
    countries.insert(std::make_pair<std::string, uint8_t>("CU", (uint8_t) country_id::CU));
    countries.insert(std::make_pair<std::string, uint8_t>("CV", (uint8_t) country_id::CV));
    countries.insert(std::make_pair<std::string, uint8_t>("CX", (uint8_t) country_id::CX));
    countries.insert(std::make_pair<std::string, uint8_t>("CY", (uint8_t) country_id::CY));
    countries.insert(std::make_pair<std::string, uint8_t>("CZ", (uint8_t) country_id::CZ));
    countries.insert(std::make_pair<std::string, uint8_t>("DE", (uint8_t) country_id::DE));
    countries.insert(std::make_pair<std::string, uint8_t>("DJ", (uint8_t) country_id::DJ));
    countries.insert(std::make_pair<std::string, uint8_t>("DK", (uint8_t) country_id::DK));
    countries.insert(std::make_pair<std::string, uint8_t>("DM", (uint8_t) country_id::DM));
    countries.insert(std::make_pair<std::string, uint8_t>("DO", (uint8_t) country_id::DO));
    countries.insert(std::make_pair<std::string, uint8_t>("DZ", (uint8_t) country_id::DZ));
    countries.insert(std::make_pair<std::string, uint8_t>("EC", (uint8_t) country_id::EC));
    countries.insert(std::make_pair<std::string, uint8_t>("EE", (uint8_t) country_id::EE));
    countries.insert(std::make_pair<std::string, uint8_t>("EG", (uint8_t) country_id::EG));
    countries.insert(std::make_pair<std::string, uint8_t>("EH", (uint8_t) country_id::EH));
    countries.insert(std::make_pair<std::string, uint8_t>("ER", (uint8_t) country_id::ER));
    countries.insert(std::make_pair<std::string, uint8_t>("ES", (uint8_t) country_id::ES));
    countries.insert(std::make_pair<std::string, uint8_t>("ET", (uint8_t) country_id::ET));
    countries.insert(std::make_pair<std::string, uint8_t>("FI", (uint8_t) country_id::FI));
    countries.insert(std::make_pair<std::string, uint8_t>("FJ", (uint8_t) country_id::FJ));
    countries.insert(std::make_pair<std::string, uint8_t>("FK", (uint8_t) country_id::FK));
    countries.insert(std::make_pair<std::string, uint8_t>("FO", (uint8_t) country_id::FO));
    countries.insert(std::make_pair<std::string, uint8_t>("FR", (uint8_t) country_id::FR));
    countries.insert(std::make_pair<std::string, uint8_t>("GA", (uint8_t) country_id::GA));
    countries.insert(std::make_pair<std::string, uint8_t>("GB", (uint8_t) country_id::GB));
    countries.insert(std::make_pair<std::string, uint8_t>("GD", (uint8_t) country_id::GD));
    countries.insert(std::make_pair<std::string, uint8_t>("GE", (uint8_t) country_id::GE));
    countries.insert(std::make_pair<std::string, uint8_t>("GF", (uint8_t) country_id::GF));
    countries.insert(std::make_pair<std::string, uint8_t>("GH", (uint8_t) country_id::GH));
    countries.insert(std::make_pair<std::string, uint8_t>("GI", (uint8_t) country_id::GI));
    countries.insert(std::make_pair<std::string, uint8_t>("GL", (uint8_t) country_id::GL));
    countries.insert(std::make_pair<std::string, uint8_t>("GM", (uint8_t) country_id::GM));
    countries.insert(std::make_pair<std::string, uint8_t>("GN", (uint8_t) country_id::GN));
    countries.insert(std::make_pair<std::string, uint8_t>("GP", (uint8_t) country_id::GP));
    countries.insert(std::make_pair<std::string, uint8_t>("GQ", (uint8_t) country_id::GQ));
    countries.insert(std::make_pair<std::string, uint8_t>("GR", (uint8_t) country_id::GR));
    countries.insert(std::make_pair<std::string, uint8_t>("GT", (uint8_t) country_id::GT));
    countries.insert(std::make_pair<std::string, uint8_t>("GU", (uint8_t) country_id::GU));
    countries.insert(std::make_pair<std::string, uint8_t>("GW", (uint8_t) country_id::GW));
    countries.insert(std::make_pair<std::string, uint8_t>("GY", (uint8_t) country_id::GY));
    countries.insert(std::make_pair<std::string, uint8_t>("HK", (uint8_t) country_id::HK));
    countries.insert(std::make_pair<std::string, uint8_t>("HN", (uint8_t) country_id::HN));
    countries.insert(std::make_pair<std::string, uint8_t>("HR", (uint8_t) country_id::HR));
    countries.insert(std::make_pair<std::string, uint8_t>("HT", (uint8_t) country_id::HT));
    countries.insert(std::make_pair<std::string, uint8_t>("HU", (uint8_t) country_id::HU));
    countries.insert(std::make_pair<std::string, uint8_t>("ID", (uint8_t) country_id::ID));
    countries.insert(std::make_pair<std::string, uint8_t>("IE", (uint8_t) country_id::IE));
    countries.insert(std::make_pair<std::string, uint8_t>("IL", (uint8_t) country_id::IL));
    countries.insert(std::make_pair<std::string, uint8_t>("IN", (uint8_t) country_id::IN));
    countries.insert(std::make_pair<std::string, uint8_t>("IO", (uint8_t) country_id::IO));
    countries.insert(std::make_pair<std::string, uint8_t>("IQ", (uint8_t) country_id::IQ));
    countries.insert(std::make_pair<std::string, uint8_t>("IS", (uint8_t) country_id::IS));
    countries.insert(std::make_pair<std::string, uint8_t>("IT", (uint8_t) country_id::IT));
    countries.insert(std::make_pair<std::string, uint8_t>("JM", (uint8_t) country_id::JM));
    countries.insert(std::make_pair<std::string, uint8_t>("JO", (uint8_t) country_id::JO));
    countries.insert(std::make_pair<std::string, uint8_t>("JP", (uint8_t) country_id::JP));
    countries.insert(std::make_pair<std::string, uint8_t>("KE", (uint8_t) country_id::KE));
    countries.insert(std::make_pair<std::string, uint8_t>("KG", (uint8_t) country_id::KG));
    countries.insert(std::make_pair<std::string, uint8_t>("KH", (uint8_t) country_id::KH));
    countries.insert(std::make_pair<std::string, uint8_t>("KI", (uint8_t) country_id::KI));
    countries.insert(std::make_pair<std::string, uint8_t>("KM", (uint8_t) country_id::KM));
    countries.insert(std::make_pair<std::string, uint8_t>("KW", (uint8_t) country_id::KW));
    countries.insert(std::make_pair<std::string, uint8_t>("KY", (uint8_t) country_id::KY));
    countries.insert(std::make_pair<std::string, uint8_t>("KZ", (uint8_t) country_id::KZ));
    countries.insert(std::make_pair<std::string, uint8_t>("LB", (uint8_t) country_id::LB));
    countries.insert(std::make_pair<std::string, uint8_t>("LI", (uint8_t) country_id::LI));
    countries.insert(std::make_pair<std::string, uint8_t>("LK", (uint8_t) country_id::LK));
    countries.insert(std::make_pair<std::string, uint8_t>("LR", (uint8_t) country_id::LR));
    countries.insert(std::make_pair<std::string, uint8_t>("LS", (uint8_t) country_id::LS));
    countries.insert(std::make_pair<std::string, uint8_t>("LT", (uint8_t) country_id::LT));
    countries.insert(std::make_pair<std::string, uint8_t>("LU", (uint8_t) country_id::LU));
    countries.insert(std::make_pair<std::string, uint8_t>("LV", (uint8_t) country_id::LV));
    countries.insert(std::make_pair<std::string, uint8_t>("MA", (uint8_t) country_id::MA));
    countries.insert(std::make_pair<std::string, uint8_t>("MC", (uint8_t) country_id::MC));
    countries.insert(std::make_pair<std::string, uint8_t>("MG", (uint8_t) country_id::MG));
    countries.insert(std::make_pair<std::string, uint8_t>("MH", (uint8_t) country_id::MH));
    countries.insert(std::make_pair<std::string, uint8_t>("ML", (uint8_t) country_id::ML));
    countries.insert(std::make_pair<std::string, uint8_t>("MM", (uint8_t) country_id::MM));
    countries.insert(std::make_pair<std::string, uint8_t>("MN", (uint8_t) country_id::MN));
    countries.insert(std::make_pair<std::string, uint8_t>("MP", (uint8_t) country_id::MP));
    countries.insert(std::make_pair<std::string, uint8_t>("MQ", (uint8_t) country_id::MQ));
    countries.insert(std::make_pair<std::string, uint8_t>("MR", (uint8_t) country_id::MR));
    countries.insert(std::make_pair<std::string, uint8_t>("MS", (uint8_t) country_id::MS));
    countries.insert(std::make_pair<std::string, uint8_t>("MT", (uint8_t) country_id::MT));
    countries.insert(std::make_pair<std::string, uint8_t>("MU", (uint8_t) country_id::MU));
    countries.insert(std::make_pair<std::string, uint8_t>("MV", (uint8_t) country_id::MV));
    countries.insert(std::make_pair<std::string, uint8_t>("MW", (uint8_t) country_id::MW));
    countries.insert(std::make_pair<std::string, uint8_t>("MX", (uint8_t) country_id::MX));
    countries.insert(std::make_pair<std::string, uint8_t>("MY", (uint8_t) country_id::MY));
    countries.insert(std::make_pair<std::string, uint8_t>("MZ", (uint8_t) country_id::MZ));
    countries.insert(std::make_pair<std::string, uint8_t>("NA", (uint8_t) country_id::NA));
    countries.insert(std::make_pair<std::string, uint8_t>("NC", (uint8_t) country_id::NC));
    countries.insert(std::make_pair<std::string, uint8_t>("NE", (uint8_t) country_id::NE));
    countries.insert(std::make_pair<std::string, uint8_t>("NF", (uint8_t) country_id::NF));
    countries.insert(std::make_pair<std::string, uint8_t>("NG", (uint8_t) country_id::NG));
    countries.insert(std::make_pair<std::string, uint8_t>("NI", (uint8_t) country_id::NI));
    countries.insert(std::make_pair<std::string, uint8_t>("NL", (uint8_t) country_id::NL));
    countries.insert(std::make_pair<std::string, uint8_t>("NO", (uint8_t) country_id::NO));
    countries.insert(std::make_pair<std::string, uint8_t>("NP", (uint8_t) country_id::NP));
    countries.insert(std::make_pair<std::string, uint8_t>("NR", (uint8_t) country_id::NR));
    countries.insert(std::make_pair<std::string, uint8_t>("NU", (uint8_t) country_id::NU));
    countries.insert(std::make_pair<std::string, uint8_t>("NZ", (uint8_t) country_id::NZ));
    countries.insert(std::make_pair<std::string, uint8_t>("OM", (uint8_t) country_id::OM));
    countries.insert(std::make_pair<std::string, uint8_t>("PA", (uint8_t) country_id::PA));
    countries.insert(std::make_pair<std::string, uint8_t>("PE", (uint8_t) country_id::PE));
    countries.insert(std::make_pair<std::string, uint8_t>("PF", (uint8_t) country_id::PF));
    countries.insert(std::make_pair<std::string, uint8_t>("PG", (uint8_t) country_id::PG));
    countries.insert(std::make_pair<std::string, uint8_t>("PH", (uint8_t) country_id::PH));
    countries.insert(std::make_pair<std::string, uint8_t>("PK", (uint8_t) country_id::PK));
    countries.insert(std::make_pair<std::string, uint8_t>("PL", (uint8_t) country_id::PL));
    countries.insert(std::make_pair<std::string, uint8_t>("PN", (uint8_t) country_id::PN));
    countries.insert(std::make_pair<std::string, uint8_t>("PR", (uint8_t) country_id::PR));
    countries.insert(std::make_pair<std::string, uint8_t>("PS", (uint8_t) country_id::PS));
    countries.insert(std::make_pair<std::string, uint8_t>("PT", (uint8_t) country_id::PT));
    countries.insert(std::make_pair<std::string, uint8_t>("PW", (uint8_t) country_id::PW));
    countries.insert(std::make_pair<std::string, uint8_t>("PY", (uint8_t) country_id::PY));
    countries.insert(std::make_pair<std::string, uint8_t>("QA", (uint8_t) country_id::QA));
    countries.insert(std::make_pair<std::string, uint8_t>("RE", (uint8_t) country_id::RE));
    countries.insert(std::make_pair<std::string, uint8_t>("RO", (uint8_t) country_id::RO));
    countries.insert(std::make_pair<std::string, uint8_t>("RW", (uint8_t) country_id::RW));
    countries.insert(std::make_pair<std::string, uint8_t>("SA", (uint8_t) country_id::SA));
    countries.insert(std::make_pair<std::string, uint8_t>("SB", (uint8_t) country_id::SB));
    countries.insert(std::make_pair<std::string, uint8_t>("SC", (uint8_t) country_id::SC));
    countries.insert(std::make_pair<std::string, uint8_t>("SD", (uint8_t) country_id::SD));
    countries.insert(std::make_pair<std::string, uint8_t>("SE", (uint8_t) country_id::SE));
    countries.insert(std::make_pair<std::string, uint8_t>("SG", (uint8_t) country_id::SG));
    countries.insert(std::make_pair<std::string, uint8_t>("SI", (uint8_t) country_id::SI));
    countries.insert(std::make_pair<std::string, uint8_t>("SJ", (uint8_t) country_id::SJ));
    countries.insert(std::make_pair<std::string, uint8_t>("SK", (uint8_t) country_id::SK));
    countries.insert(std::make_pair<std::string, uint8_t>("SL", (uint8_t) country_id::SL));
    countries.insert(std::make_pair<std::string, uint8_t>("SM", (uint8_t) country_id::SM));
    countries.insert(std::make_pair<std::string, uint8_t>("SN", (uint8_t) country_id::SN));
    countries.insert(std::make_pair<std::string, uint8_t>("SO", (uint8_t) country_id::SO));
    countries.insert(std::make_pair<std::string, uint8_t>("SR", (uint8_t) country_id::SR));
    countries.insert(std::make_pair<std::string, uint8_t>("ST", (uint8_t) country_id::ST));
    countries.insert(std::make_pair<std::string, uint8_t>("SV", (uint8_t) country_id::SV));
    countries.insert(std::make_pair<std::string, uint8_t>("SZ", (uint8_t) country_id::SZ));
    countries.insert(std::make_pair<std::string, uint8_t>("TC", (uint8_t) country_id::TC));
    countries.insert(std::make_pair<std::string, uint8_t>("TD", (uint8_t) country_id::TD));
    countries.insert(std::make_pair<std::string, uint8_t>("TF", (uint8_t) country_id::TF));
    countries.insert(std::make_pair<std::string, uint8_t>("TG", (uint8_t) country_id::TG));
    countries.insert(std::make_pair<std::string, uint8_t>("TH", (uint8_t) country_id::TH));
    countries.insert(std::make_pair<std::string, uint8_t>("TJ", (uint8_t) country_id::TJ));
    countries.insert(std::make_pair<std::string, uint8_t>("TK", (uint8_t) country_id::TK));
    countries.insert(std::make_pair<std::string, uint8_t>("TM", (uint8_t) country_id::TM));
    countries.insert(std::make_pair<std::string, uint8_t>("TN", (uint8_t) country_id::TN));
    countries.insert(std::make_pair<std::string, uint8_t>("TO", (uint8_t) country_id::TO));
    countries.insert(std::make_pair<std::string, uint8_t>("TR", (uint8_t) country_id::TR));
    countries.insert(std::make_pair<std::string, uint8_t>("TT", (uint8_t) country_id::TT));
    countries.insert(std::make_pair<std::string, uint8_t>("TV", (uint8_t) country_id::TV));
    countries.insert(std::make_pair<std::string, uint8_t>("TW", (uint8_t) country_id::TW));
    countries.insert(std::make_pair<std::string, uint8_t>("TZ", (uint8_t) country_id::TZ));
    countries.insert(std::make_pair<std::string, uint8_t>("UA", (uint8_t) country_id::UA));
    countries.insert(std::make_pair<std::string, uint8_t>("UG", (uint8_t) country_id::UG));
    countries.insert(std::make_pair<std::string, uint8_t>("US", (uint8_t) country_id::US));
    countries.insert(std::make_pair<std::string, uint8_t>("UY", (uint8_t) country_id::UY));
    countries.insert(std::make_pair<std::string, uint8_t>("UZ", (uint8_t) country_id::UZ));
    countries.insert(std::make_pair<std::string, uint8_t>("VE", (uint8_t) country_id::VE));
    countries.insert(std::make_pair<std::string, uint8_t>("VN", (uint8_t) country_id::VN));
    countries.insert(std::make_pair<std::string, uint8_t>("VU", (uint8_t) country_id::VU));
    countries.insert(std::make_pair<std::string, uint8_t>("WF", (uint8_t) country_id::WF));
    countries.insert(std::make_pair<std::string, uint8_t>("WS", (uint8_t) country_id::WS));
    countries.insert(std::make_pair<std::string, uint8_t>("YE", (uint8_t) country_id::YE));
    countries.insert(std::make_pair<std::string, uint8_t>("YT", (uint8_t) country_id::YT));
    countries.insert(std::make_pair<std::string, uint8_t>("RS", (uint8_t) country_id::RS));
    countries.insert(std::make_pair<std::string, uint8_t>("ZA", (uint8_t) country_id::ZA));
    countries.insert(std::make_pair<std::string, uint8_t>("ZM", (uint8_t) country_id::ZM));
    countries.insert(std::make_pair<std::string, uint8_t>("ME", (uint8_t) country_id::ME));
    countries.insert(std::make_pair<std::string, uint8_t>("ZW", (uint8_t) country_id::ZW));
    countries.insert(std::make_pair<std::string, uint8_t>("AX", (uint8_t) country_id::AX));
    countries.insert(std::make_pair<std::string, uint8_t>("GG", (uint8_t) country_id::GG));
    countries.insert(std::make_pair<std::string, uint8_t>("IM", (uint8_t) country_id::IM));
    countries.insert(std::make_pair<std::string, uint8_t>("JE", (uint8_t) country_id::JE));
    countries.insert(std::make_pair<std::string, uint8_t>("MF", (uint8_t) country_id::MF));
}

uint8_t shiro::geoloc::get_country_id(const std::string &country_code) {
    try {
        return countries.at(country_code);
    } catch (const std::out_of_range &ex) {
        LOG_F(WARNING, "Unable to find country id for country %s: %s", country_code.c_str(), ex.what());
    }

    return (uint8_t) country_id::JP;  // Default to Japan because we're weebs ¯\_(ツ)_/¯
}

std::string shiro::geoloc::get_country_name(uint8_t country_id) {
    std::string result_country = "JP"; // Default to Japan because we're weebs ¯\_(ツ)_/¯

    auto method = [&](const std::unordered_map<std::string, uint8_t>::value_type &vt) -> bool {
        if (vt.second == country_id) {
            result_country = vt.first;
            return true;
        }

        return false;
    };

    if (std::find_if(countries.begin(), countries.end(), method) == countries.end())
        LOG_F(WARNING, "Unable to find country name for country id: %hhu", country_id);

    return result_country;
}
