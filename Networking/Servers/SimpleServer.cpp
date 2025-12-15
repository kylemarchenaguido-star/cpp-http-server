#include "SimpleServer.hpp"

ssc::SimpleServer::SimpleServer(int domain,int service,int protocol,int port,u_long interf,int bklg){

    socket = new ListeningSocket(domain,service,protocol,port,interf,bklg);
    

    }

ssc::ListeningSocket * ssc::SimpleServer::get_socket(){

    return socket;
}