#include <stdio.h>
#include "main.h"

/**
 * main - program that prints number of arguments passed it
 * @argc: indicates number of arguments
 * @argv: indicates array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
