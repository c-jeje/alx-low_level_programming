#include "main.h"
#include <stdlib.h>

/**
 * main - acomputes and prints sum of multipltes of 3|| 5 < 1024
 *
 * Return: returns void
 */
int main(void)
{
	unsigned long int sum3, sum5, sumup;

	int i;

	sum3 = 0;
	sum5 = 0;
	sumup = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum3 = sum3 + i;

		if (i % 5 == 0)
			sum5 = sum5 + i;
	}
	sumup = sum3 + sum5;

	_putchar(sumup + '0');
	_putchar('\n');
	return (sumup);
}
