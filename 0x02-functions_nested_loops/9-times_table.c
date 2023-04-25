#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return:
 */

void times_table(void)
{
	int a, b, n;

	for (a = 0; b < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
		n = b * a;
		if (b == 0)
	{
	_putchar(n + '0');
	}
	if (n < 10 && b != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(n + '0');
	}
       	else if (n >= 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((n/ 10) + '0');
	_putchar((n % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
