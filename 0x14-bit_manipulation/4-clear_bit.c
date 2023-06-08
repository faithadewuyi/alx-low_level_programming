#include "main.h"

/**
 * clear_bit - function that sets the value of a given bi
 * @n: pointer toinput number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 43)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
