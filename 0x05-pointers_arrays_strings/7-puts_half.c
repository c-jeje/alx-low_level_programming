#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len1, half_len, i;

	len1 = 0;

	while (str[len1] != '\0')
	{
		len1 += 1;
	}
	len1 -=1;

	if (len1 % 2 != 0)
	{
		half_len = (len1 - 1) / 2;
	}
	else
	{
		half_len = (len1 / 2);
	}
	for (i = half_len; i <= len1 - 1; i += 1)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
