#include "main.h"

/**
*prints alphabet in lower
*iin lower case
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
