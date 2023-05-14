#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: indicates number of arguments
 * @argv: indicates array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
