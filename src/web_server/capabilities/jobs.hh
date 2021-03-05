#pragma once

#include "src/web_server/web_worker/context.hh"

#include <cstdint>

namespace web_server::capabilities {

struct Jobs {
    bool view : 1;
    bool view_all : 1;
};

Jobs jobs_for(const decltype(web_worker::Context::session)& session) noexcept;

} // namespace web_server::capabilities