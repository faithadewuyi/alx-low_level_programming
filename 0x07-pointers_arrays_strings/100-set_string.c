#include "main.h"

/**
 * set_string – function sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
