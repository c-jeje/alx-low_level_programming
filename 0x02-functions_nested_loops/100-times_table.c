#include <stdio.h>
#include "main.h"

/**
 * print_times_table- prints all natural numbers from n to 98,
 * @n: print from this number
 */
void print_times_table(int n)
{
	int i, k;
	char product;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k < n; k++)
			{
				product = i * k;
				_putchar(product);
				_putchar(',' );
				_putchar(' ');
			}
			product = i * k;
			_putchar(product);
			_putchar('\n');
		}
	}
}
