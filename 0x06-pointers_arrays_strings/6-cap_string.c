#include "main.h"

/**
 * 6-cap_string.c - capitalizes all words of a string.
 * @str: string to be capitalised
 * 
 * Return: returns a char str
 */
char *cap_string(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (((str[1] >= 'a') || (str[i] >= 'A')) && ((str[i] <= 'z') || (str[i] >= 'Z')))
			str[i] = str[i] - 32;
	}
	return (str);
}
