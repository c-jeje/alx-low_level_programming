#include "main.h"
#include <stdio.h>

/**
 * puts2 - returns the length of a string
 * @str: points to a character
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar(10);
}
