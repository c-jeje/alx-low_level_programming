#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: returns the type integer
 */
void print_number(int n)
{
	int i;
	unsigned int j;

	for (i = 0; n != '\0'; i++)
	{
		if (n >= 0)
			j = n;
		else
			j = n * -1;
		
		_putchar(j);
	}
}
