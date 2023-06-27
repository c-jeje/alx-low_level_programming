#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string in reverse, followed by a new line
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, a, z, j;
	char  str2;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	z = i, j = 0

	for (a = z - 1; a >= 0; a--)
	{
		str2[j] = s[a];

	}

	*s = str2;
}
