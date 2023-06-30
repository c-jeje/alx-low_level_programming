#include "main.h"

/** 
 * string_toupper - changes all lowercase letters of a string to uppercase. 
 * *: any string
 * @str: string variable
 * 
 * Return: returns a char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{	
			str[i] = str[i] - ('a' - 'A');	/* or just subtract 32 */
		}
	}
	return (str);
}	
