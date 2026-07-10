#include <stdio.h>
#include <string.h>

#include "shell.h"
#include "parser.h"

#define MAX_LINE 1024

void shell_loop(void)
{
    char line[MAX_LINE];
    char *argv[MAX_ARGS];
int argc;

    while (1)
    {
        printf("myshell> ");
        fflush(stdout);

        if (fgets(line, sizeof(line), stdin) == NULL)
        {
            printf("\n");
            break;
        }

        line[strcspn(line, "\n")] = '\0';

        if (strcmp(line, "exit") == 0)
            break;

        argc = parse_input(line, argv);

if (argc == 0)
    continue;

printf("argc = %d\n", argc);

for (int i = 0; i < argc; i++)
{
    printf("argv[%d] = %s\n", i, argv[i]);
}
    }
}