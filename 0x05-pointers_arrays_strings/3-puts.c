#include "main.h"
/**
 * _put - Wa function that prints a string, followed by a new line, to stdout.
 * @: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
