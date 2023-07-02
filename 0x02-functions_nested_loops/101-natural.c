#include "main.h"
#include <stdlib.h>

/**
 * 101-natural.c - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: returns void
 */
nt main(void)
{
	unsigned long int sum3, sum5, sumup;

	int i;
	
	sum3 = 0;
	sum5 = 0;
	sumup = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum3 = +i;

		if (i % 5 == 0)
			sum5 = +i;
	}
	sumup = sum3 + sum5;

	_putchar(sumup + '0');
	_putchar('\n' + '0');
}
