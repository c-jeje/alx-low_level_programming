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

	for (i = 0; i < 10; i++)
	{
		for (t = 0; t < 10; t++)
		{
			_putchar(i * t);
		}
	}
}
