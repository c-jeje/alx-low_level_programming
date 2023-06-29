#include "main.h"

/**
 *__strcat - appends the src string to the dest string
 * @dest: variable pointed
 * @src: variable string pointed
 *
 * Return: returns char
 */
char *_strcat(char *dest, char *src)
{
	int c_dest;
	int c_src;
	
	c_dest = 0;
	c_src = 0;

	while (dest[c_dest] != '\0')
		c_dest++;

	while (src[c_src] != '\0')
	{
		dest[c_dest] = src[c_src];

		c_dest++;
		c_src++;
	}

	dest[c_dest] = '\0';
	
	return (dest);
}
