#include "src/web_server/capabilities/submissions.hh"
#include "sim/users/user.hh"

using sim::users::User;

namespace web_server::capabilities {

Submissions submissions_for(const decltype(web_worker::Context::session)& session) noexcept {
    bool is_admin = session and session->user_type == User::Type::ADMIN;
    return Submissions{
        .view = is_admin,
        .view_all = is_admin,
    };
}

} // namespace web_server::capabilities