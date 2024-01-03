/* main.c */

#include "shell.h"

int main(void)
{
    char **argv;
    char *path;

    while (1)
    {
        argv = get_input();
        if (argv == NULL)
            break;

        if (strcmp(argv[0], "exit") == 0)
        {
            free(argv[0]);
            free(argv);
            break;
        }
        else if (strcmp(argv[0], "env") == 0)
        {
            print_environment();
            free(argv[0]);
            free(argv);
            continue;
        }

        path = find_path(argv[0]);
        if (path == NULL)
        {
            fprintf(stderr, "Command not found: %s\n", argv[0]);
            free(argv[0]);
            free(argv);
            continue;
        }

        if (fork() == 0)
        {
            if (execve(path, argv, NULL) == -1)
            {
                perror(path);
            }
            exit(EXIT_FAILURE);
        }
        else
        {
            wait(NULL);
        }

        free(path);
        free(argv[0]);
        free(argv);
    }

    return 0;
}

