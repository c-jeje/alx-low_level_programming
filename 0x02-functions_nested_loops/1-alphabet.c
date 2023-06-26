#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 1; i < 27; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
