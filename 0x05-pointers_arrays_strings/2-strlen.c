#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: points to a character
 * Return:the string length
 */
int _strlen(char *s)
{
	int i;

	i= 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
