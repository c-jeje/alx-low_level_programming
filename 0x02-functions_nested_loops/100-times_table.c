#include <stdio.h>
#include "main.h"

/**
 * print_times_table- prints all natural numbers from n to 98,
 * @n: print from this number
 */
void print_times_table(int n)
{
	int i, k, product;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				product = i * k;
				if (k == 0)
				{
					_putchar(product + '0');
				}
				if (k > 0)
				{
					if (product < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					else if (product >= 10 && product <= 99)	/* two digis*/
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
					else if (product >= 100 && product <= 999)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((product / 100) + '0');
						_putchar(((product % 100) / 10) + '0');
						_putchar(((product % 100) % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
