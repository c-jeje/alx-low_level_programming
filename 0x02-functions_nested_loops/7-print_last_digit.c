#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer number
 * Return: returns an integer value
 *
 */
int print_last_digit(int n)
{
	int t;
	
	if (n >= 0)
	{
		n = (n / 1);
	}
	else
	{
		n = ((n / 1) * -1);
	}

	t = n % 10;
	
	_putchar(t + '0');

	return (t);
}
