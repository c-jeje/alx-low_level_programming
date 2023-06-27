#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	i = 10, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
