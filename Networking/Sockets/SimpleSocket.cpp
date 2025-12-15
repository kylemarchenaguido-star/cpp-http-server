#include "SimpleSocket.hpp"

// Default constructor 

ssc::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interf ){

    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interf);

    sock = socket(domain, service, protocol);
    test_connection(sock);
}


//Test connection virtual function

void ssc::SimpleSocket::test_connection(int item_to_test){

    //Confirm that the socket or connection has beem properly established
    if (item_to_test == INVALID_SOCKET || item_to_test == SOCKET_ERROR){
        int err = WSAGetLastError();
        std::cout << "Failed to connect: Error " << err << std::endl;
        exit(EXIT_FAILURE);

    }
}

//Getter function

struct sockaddr_in ssc::SimpleSocket::get_address(){
    return address;
}

int ssc::SimpleSocket::get_sock(){
    return sock;
}
//Set functions
void ssc::SimpleSocket::set_connection(int con){
    connection = con;
}