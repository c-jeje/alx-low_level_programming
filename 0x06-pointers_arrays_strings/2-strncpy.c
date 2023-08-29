#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: variable pointed
 * @src: variable string pointed
 * @n: variable counter
 *
 * Return: returns char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c_dest;
	int c_src;

	c_dest = 0;
	c_src = 0;

	while (c_src < n && src[c_src] != '\0')
	{
		dest[c_dest] = src[c_src];

		c_dest++;
		c_src++;
	}

	while (c_dest < n)
	{
		dest[c_dest] = '\0';
		c_dest++;
	}
	return (dest);
}
