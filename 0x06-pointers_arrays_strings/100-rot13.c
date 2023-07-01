#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string variable to be encoded
 *
 * Return: resulting string
 */
char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (((str[i] >= 'a') && (str[i] <= 'z'))) /*|| ((str[i] >= 'A') && (str[i] <= 'Z')))*/
			{
				if(str[i] <= 'm') /*|| (str[i] <= 'M'))*/
					str[i] = str[i] + 13;
				else
					str[i] = str[i] - 13;
				i++;
			}
	}
	return (str);
}
