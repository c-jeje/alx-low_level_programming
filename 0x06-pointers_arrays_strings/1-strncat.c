#include "main.h"

/** _strncat - appends the src string to the dest string
 * @dest: variable pointed
 * @src: variable string pointed
 * @n: variable counter
 * Return: returns char
 */
char *_strncat(char *dest, char *src, int n)
{
	int c_dest;
	int c_src;
	
	c_dest = 0;
	c_src = 0;

	while (dest[c_dest] != '\0')
		c_dest++;

	while (c_src < n && c_src != '\0')
	{
		dest[c_dest] = src[c_src];

		c_dest++;
		c_src++;
	}

	dest[c_dest] = '\0';
	
	return (dest);
}
