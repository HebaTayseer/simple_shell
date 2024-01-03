/* shell.c */

#include "shell.h"

char **get_input(void)
{
    size_t bufsize = 0;
    char *line = NULL;

    char **argv;  /* Declare the variable at the beginning */
    argv = malloc(sizeof(char *) * 2);
    if (argv == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    printf("$ ");
    if (getline(&line, &bufsize, stdin) == -1)
    {
        free(line);
        return NULL;
    }

    argv[0] = strtok(line, " \t\n");
    argv[1] = NULL;

    return argv;
}

char *find_path(const char *command)
{
    /* Implement this function to find the full path of the command using the PATH variable
     * Return NULL if the command is not found
     * Example: "/bin/ls"
     */

    /* Dummy implementation (replace with actual code) */
    return strdup(command);
}

void print_environment(void)
{
    extern char **environ;
    char **env = environ;

    while (*env != NULL)
    {
        printf("%s\n", *env);
        env++;
    }
}

