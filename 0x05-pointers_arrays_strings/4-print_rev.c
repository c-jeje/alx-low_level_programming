#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints strings n reverse
 * @s: points to a string character
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = '\0' - 1;

	while (s[i] != 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar(10);
}
