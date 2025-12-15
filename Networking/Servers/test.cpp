#include <stdio.h>
#include "TestServer.hpp"

int main(){

    WSADATA wsaData;

    int result = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (result != 0) {
        std::cout << "WSAStartup failed: " << result << std::endl;
        return 1;
    }

    ssc::TestServer t;

    WSACleanup();
}