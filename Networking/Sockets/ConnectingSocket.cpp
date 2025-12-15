#include "ConnectingSocket.hpp"

//Constructor
ssc::ConnectingSocket::BindingSocket(int domain, int service, int protocol, int port,u_long interf): SimpleSocket(domain,service,protocol,port,interf){
    set_connection (connect_to_network(get_sock(), get_address()));
    test_connection(get_connection())
}

// Implementations of connect_to_netwwork virtual function
int ssc::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address){

    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}