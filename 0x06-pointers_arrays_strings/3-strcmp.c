#include "main.h"

/** 
 *_strncmp - compares two strings.
 * @s1: variable string pointed
 * @s2: variable string pointed
 * 
 * Return: returns int
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	
	if (s1 == s2)
		result = 0;
	else if (s1 > s2)
		result = 1;
	else 
		result = -1;

	return (result);
}
