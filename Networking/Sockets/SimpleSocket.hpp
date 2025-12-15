#pragma once 
#pragma comment(lib, "ws2_32.lib")

#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

namespace ssc {
class SimpleSocket{

private: 
   struct sockaddr_in address;
   SOCKET sock; 
   int connection;
      
public:    

   //Constructor 
   SimpleSocket(
      int domain,
      int service,
      int protocol,
      int port,
      u_long interf
   );

   //Virtual function to connect to a network
   virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
   //Function to test sockets and connections 
   void test_connection(int);
   //Getter functions
   struct sockaddr_in get_address();
   int get_sock();
   void set_connection(int con);
};

}
 