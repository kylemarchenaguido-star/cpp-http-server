#include "ListeningSocket.hpp"

ssc::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interf, int bklg): BindingSocket(domain, service, protocol,port, interf){
    backlog = bklg;
    start_listening();
    test_connection(listening);
}

void ssc::ListeningSocket::start_listening(){
    listening = listen(get_sock(), backlog);
}
