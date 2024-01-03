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
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Running the Shell

### Interactive Mode

```bash
./hsh
```

### Non-interactive Mode

```bash
$ echo "/bin/ls" | ./hsh
```

## Contributor

Heba Ashour
