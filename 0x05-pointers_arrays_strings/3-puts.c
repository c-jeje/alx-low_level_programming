#include "main.h"
#include <stdio.h>

/**
 * _puts - returns the length of a string
 * @str: points to a character
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar("\n");
}
