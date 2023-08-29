#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string variable to be encoded
 *
 * Return: resulting string
 */
char *leet(char *str)
{
	int i, j;

	char *letters = "aeotlAEOTL";

	char *values = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = values[j];
			}
		}
	}
	return (str);
}
