#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return:
 */

void times_table(void)
{
	int a, b, k;

	for (a = 0; b < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
	k = b * a;
	if (b == 0)
	{
	_putchar(k + '0');
	}
	if (k < 10 && b != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
	}
       	else if (k >= 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((k/ 10) + '0');
	_putchar((k % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
