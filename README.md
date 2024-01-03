# Simple Shell Project

## Overview

This project aims to create a simple shell program in C, allowing users to execute basic commands in a Unix-like environment.

## Features

- **Command Execution:** Execute simple commands entered by the user.
- **Command Line Arguments:** Handle command lines with arguments.
- **PATH Handling:** Search for executable commands in the PATH environment variable.
- **Built-in Commands:**
  - `exit`: Exit the shell.
  - `env`: Print the current environment variables.
- **Error Handling:** Provide meaningful error messages for user-friendly interaction.

## Requirements

- **Environment:** Developed and tested on Ubuntu 20.04 LTS.
- **Compiler:** GCC with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Getting Started

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell

## Running the Shell

### Interactive Mode

bash
Copy code
./simple_shell

### Non-interactive Mode

bash
Copy code
echo "/bin/ls" | ./simple_shell

## Usage Examples

bash
Copy code
$ ./simple_shell
($) /bin/ls
file1.txt file2.txt
($) exit
bash
Copy code
$ echo "/bin/ls" | ./si

## Contributor

Heba Ashour
