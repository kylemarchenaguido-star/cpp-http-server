#pragma once
#pragma comment(lib, "ws2_32.lib")
#include <stdio.h>
#include "SimpleSocket.hpp"

namespace ssc{

class ConnectingSocket: public SimpleSocket{

public:
    //Constructor
    ConnectingSocket(
        int domain,
        int service,
        int protocol,
        int port,
        u_long interf);

    //Virutal function from parent
    int connect_to_network(int sock, struct sockaddr_in address);

};
}