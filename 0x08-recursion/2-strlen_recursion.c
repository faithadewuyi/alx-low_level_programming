#include "main.h"
/**
 * _strlen_recursion – function that returns the length of a string.
 * @s: Indicates the string to be measured.
 * Return: Expresses length of the string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
