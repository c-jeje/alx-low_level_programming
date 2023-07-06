#include "main.h"

/**
 *   _strlen_recursion -  returns string length.
 * @s: the string to be calculated
 *
 * Return: returns lendth of s
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
