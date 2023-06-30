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
	/*if (str[i] == '\n' || str[i] == ',' || str[i] == ' '*/ 
		if (((str[i] >= 32) && (str[i] <= 47)) || ((str[i] >= 58) && (str[i] <= 64)) || ((str[i] >= 123) && (str[i] <= 126)) || ((str[i] == 9) || (str[i] == 10)))
		{
			if ((str[i+1] >= 97) && (str[i+1] <= 122))
				str[i+1] = str[i+1] - 32;
		}
	}
	return (str);
}
