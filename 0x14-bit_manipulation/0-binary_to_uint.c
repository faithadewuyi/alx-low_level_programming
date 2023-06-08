#include "main.h"

/**
 * binary_to_uint - function that converts a binary numb to unsigned int
 * @b: string containing binary numb
 * Return:return 0
 */
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	for (i = 0; b[i];  i++)
{
	if (b[i] == '0')
{
	result = (result << 1);
}
	else if (b[i] == '1')
{
	result = (result << 1) | 1;
}	else
{

	return (0);
}
}

	return (result);
}
