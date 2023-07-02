#include "main.h"

/**
 * jack_bauer - prints every minute,  from 00:00 to 23:59.
 *
 * Return: returns void
 *
 */
void jack_bauer(void)
{
	int t, i;

	for (i = 0; i < 24; i++)
	{
		for (t = 0; t < 60; t++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar('\n');
		}
	}
}
