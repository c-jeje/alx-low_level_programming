#include "main.h"

/**
 * print_alphabet_x10 - ten times
 * followed by a new lin
 */
void print_alphabet_x10(void)
{
	char c;
	int i;
	int t = 1;

	while (t < 11)
	{
		c = 'a';
		for (i = 1; i < 27; i++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		t++;
	}
}
