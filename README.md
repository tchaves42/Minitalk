# Minitalk

## Overview

"Minitalk" is a small data exchange program developed as part of the 42 cursus. The primary objective of this project is to implement a client-server architecture for data communication using UNIX signals. The project explores the use of signals to facilitate communication between two processes, allowing for the exchange of information.

## Requirements

To run the Minitalk program, you need:

- A Unix-based operating system (Linux/macOS)
- A C compiler (e.g., gcc)

## Usage

### Compilation

To compile the Minitalk program, use the provided Makefile:

```bash
make
```
### Execution

1. Start the server

```bash
./server
```
2. Send message with client

```bash
./client [server_pid] ["MESSAGE"]
```
Replace [SERVER_PID] with the Process ID (PID) of the server obtained during its startup. Replace [MESSAGE] with the data you want to send to the server.

## Funcionality

- The program uses UNIX signals for inter-process communication.
- Signal handlers are employed to handle incoming signals.
- Error handling mechanisms are implemented to ensure robustness.

## License

This project is licensed under the MIT License.
