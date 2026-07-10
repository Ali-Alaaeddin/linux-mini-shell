#include "parser.h"
#include <string.h>
#include <stdio.h>
/*
 * Splits the input line into command-line arguments.
 *
 * Parameters:
 *     line - input string (modified in-place)
 *     argv - output array of argument pointers
 *
 * Returns:
 *     Number of parsed arguments.
 */
int parse_input(char *line, char *argv[]) {
  if (line == NULL || argv == NULL)
{
    return 0;
}
const char *delim = " \t\n";
    int i = 0;
  char *token = strtok(line, delim);

while (token != NULL && i < MAX_ARGS - 1)
{
    argv[i++] = token;
    token = strtok(NULL, delim);
}

argv[i] = NULL;
return i;
}
