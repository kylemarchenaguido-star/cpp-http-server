# C++ HTTP Server (WinSock2)

A low-level TCP server built from scratch in C++ using the WinSock2 (ws2_32) 
library on Windows. This project demonstrates foundational network programming 
concepts including socket lifecycle management, client connection handling, 
and bidirectional data communication.

## Features
- TCP socket initialization and binding using WinSock2
- Accepts and manages incoming client connections
- Sends and receives data over the network
- Custom socket utility library (`ssclibc`) for reusable networking logic
- Organized into modular components: Sockets, Servers

## Project Structure
cpp-http-server/
├── ssclibc.cpp / .hpp         # Core socket utility library
├── Networking/
│   ├── Sockets/               # Low-level socket abstractions
│   ├── Servers/               # Server implementation logic
│   └── ssclibc-networking     # Networking extensions

## Tech Stack
- Language: C++
- Library: WinSock2 (ws2_32)
- Platform: Windows
- IDE: Visual Studio 2022

## How to Run
1. Open the project in Visual Studio 2022
2. Build the solution (ensure ws2_32.lib is linked)
3. Run the executable — server will start listening for connections
