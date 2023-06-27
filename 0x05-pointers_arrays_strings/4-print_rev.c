#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints strings n reverse
 * @s: points to a string character
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++; /*determining the length of the string*/
	}
	j = i;

	while (s[j - 1] > -1)
	{
		putchar(s[j]);
		j--;
	}
	putchar(10);
}
