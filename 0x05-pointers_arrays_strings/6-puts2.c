#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, a, z;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	z = i;

	for (a = 0; a <= z; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
