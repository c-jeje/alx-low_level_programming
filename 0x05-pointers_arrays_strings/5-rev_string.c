#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, a, z;
	char  str2;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	z = i;

	for (a = z - 1; a >= 0; a--)
	{
		str2 = + s[a];

	}

	*s = str2;
}
