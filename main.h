#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFSIZE 1024

extern char **environ;

/* Function prototypes */
void print_string(char *str);
void _putchar(char c);
size_t _strlen(char *s);
char *_strdup(char *str);
char *_getenv(const char *name);
char **strtow(char *str, char delimiter);
int builtins(char **args, char *path, char *line);
int found(char **args, char *path, char *fullPath);
char *findInPATH(char *path, char *command);
int exit_shell(void);
int print_env(void);
int (*get_op_func(char *s))(void);
void free_all(char **args, char *path, char *fullPath);

#endif /* MAIN_H */

