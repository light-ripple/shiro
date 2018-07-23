#include <boost/algorithm/string.hpp>

#include "../channels/channel_manager.hh"
#include "../config/bot_file.hh"
#include "bot_utils.hh"

void shiro::utils::bot::respond(std::string message, std::shared_ptr<shiro::users::user> user, std::string channel, bool only_user) {
    io::osu_writer buffer;
    io::layouts::message response;

    response.sender = config::bot::name;
    response.sender_id = 1;

    response.channel = channel;
    response.content = message;

    buffer.send_message(response);
    user->queue.enqueue(buffer);

    if (!boost::algorithm::starts_with(channel, "#"))
        return;

    if (only_user)
        return;

    auto users = channels::manager::get_users_in_channel(channel);

    for (const std::shared_ptr<users::user> &channel_user : users) {
        if (channel_user->user_id == user->user_id || user->user_id == 1)
            continue;

        channel_user->queue.enqueue(buffer);
    }
}
