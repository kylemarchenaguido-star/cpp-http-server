#include "TestServer.hpp"

ssc::TestServer::TestServer() : SimpleServer(AF_INET, SOCK_STREAM,0,80,INADDR_ANY,10){

    launch();
}



void ssc::TestServer::accepter(){

    struct sockaddr_in address = get_socket()->get_address();
    int addrlen = sizeof(address);
    new_socket = accept(get_socket()->get_sock(),(struct sockaddr *)&address,(socklen_t*)&addrlen);
    recv(new_socket,buffer,30000,0);
}

void ssc::TestServer::handler(){

    std::cout << buffer << std::endl;
}

void ssc::TestServer::responder(){

    char *hello = "men fuck you pusi";
    send (new_socket,hello,strlen(hello),0);
    closesocket(new_socket);
}

void ssc::TestServer::launch(){

    while (true) {

        std::cout << "== Waiting ==" << std::endl;
        accepter();
        handler();
        responder();
        std::cout << "== Done == " << std::endl;
    }

}