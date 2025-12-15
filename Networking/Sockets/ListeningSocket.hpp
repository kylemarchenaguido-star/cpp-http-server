#pragma once
#pragma comment(lib, "ws2_32.lib")


#include <stdio.h>

#include "BindingSocket.hpp"

namespace ssc {

class ListeningSocket: public BindingSocket{

private:
    int backlog;
    int listening;

public:
    ListeningSocket(
        int domain,
        int service,
        int protocol,
        int port,
        u_long interf,
        int bklg);
    void start_listening();

};
}