#include <stdio.h>
#include <string.h>

#include "shell.h"

#define MAX_LINE 1024

void shell_loop(void)
{
    char line[MAX_LINE];

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

        printf("You entered: %s\n", line);
    }
}