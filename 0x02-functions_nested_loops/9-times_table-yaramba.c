#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: returns void
 *
 */
void times_tabler(void)
{
	int t, i;

	int product;

	for (i = 0; i < 10; i++)
	{
		for (t = 0; t < 10; t++)
		{
			product = (i * t);
			_putchar(product + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
