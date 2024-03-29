/* shell.h */

#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

char **get_input(void);
char *find_path(const char *command);
void print_environment(void);

#endif /* SHELL_H */

