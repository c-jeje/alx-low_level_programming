#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, a, z;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	z = i;

	for (a = z - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
