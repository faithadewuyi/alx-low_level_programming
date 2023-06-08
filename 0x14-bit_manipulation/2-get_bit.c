#include "main.h"

/**
 * get_bit - function that returns value of a bit at given index
 * @n: input number
 * @index: bit at given index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 43)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
