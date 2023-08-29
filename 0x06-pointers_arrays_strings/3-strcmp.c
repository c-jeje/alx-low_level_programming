#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: variable string pointed
 * @s2: variable string pointed
 *
 * Return: returns int
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;

		if (*s1 == *s2)
		{
			result = 0;
		}
		else
		{
			result = (*s1 - *s2);
		}
	}
	return (result);
}
