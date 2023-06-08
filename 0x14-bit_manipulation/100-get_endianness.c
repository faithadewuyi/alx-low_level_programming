#include "main.h"

/**
 * get_endianness - function that checks endianess
 * Return: 0 return input
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
