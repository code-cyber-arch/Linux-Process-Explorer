# Linux Process Permissions Explorer

## Overview
Linux Process Permissions Explorer is a simple C program designed to list all running processes on a Linux system along with their command line and permission details, such as user and group IDs. This utility scans the `/proc` directory to retrieve information about each process, making it a useful tool for system administrators and security professionals who need to audit process permissions.

## Requirements
- A Linux operating system with the `/proc` filesystem available (most standard Linux distributions meet this requirement).
- GCC (GNU Compiler Collection) for compiling the C program.

## Installation

### Clone the Repository
First, clone the repository to your local machine:

```bash
git clone https://github.com/amirasabdu/Linux-Process-Explorer.git
cd Linux-Process-Permissions-Explorer
```

## Compile the Program
Use GCC to compile the source code:
```sh
gcc -o proc_summary proc_summary.c
```
## Usage
Run the compiled executable to list the processes and their permissions:
```sh
./proc_summary
```
The output will display the PID, command line, and UID/GID of each process.

## Contributing
Contributions to the Linux Process Permissions Explorer are welcome. Here's how you can contribute:

1. Fork the repository - Create a personal fork of the project on GitHub.
2. Clone the fork - Clone the fork to your local machine and set up the upstream remote:
```sh
git clone https://github.com/amirasabdu/Linux-Process-Explorer.git
cd Linux-Process-Explorer
git remote add upstream https://github.com/amirasabdu/Linux-Process-Explorer.git

```
3. Create a new branch - Make changes in a new branch:
```sh
git checkout -b feature-name
```
4. Commit changes - Commit your changes by making sure to sign off on them:
```sh
git commit -s -m "Add a concise commit message describing your change"
```
5. Push your changes - Push the changes to your fork:
```sh
git push origin feature-name
```
6. Submit a Pull Request - Open a pull request from your feature branch to the upstream master branch. Provide a clear description of the problem and solution, including any relevant issue numbers.
### 
Feel free to report issues or suggest improvements by creating an issue or submitting a pull request.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
```sh

This README provides a basic introduction to your project, explains how to get it set up, and encourages others to contribute. If you haven’t already created a `LICENSE` file, it’s good practice to do so, especially if you plan to share your work openly. The MIT License is a popular choice for software as it permits reuse within proprietary software on the condition that the license is distributed with that software.

```
