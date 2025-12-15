#pragma once
#pragma comment(lib, "ws2_32.lib")
#include <stdio.h>
#include "SimpleServer.hpp"
#include <winsock2.h>

namespace ssc{

class TestServer: public SimpleServer{

private:

    char buffer[30000] = {30};
    int new_socket;
    void accepter();
    void handler();
    void responder();

public:

    TestServer();
    void launch();
};
}