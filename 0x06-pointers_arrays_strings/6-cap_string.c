#include "main.h"

/**
 * cap_string - capitalizes string words.
 * @str: string to be capitalised
 *
 * Return: char str
 */
char *cap_string(char *str)
{
	int i, s;

	char k[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			 str[0] = str[0] - 32;
		}
		for (s = 0; s < 13; s++)
		{
			if (str[i] == k[s])
			{
				if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
