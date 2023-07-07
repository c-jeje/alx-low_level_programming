#include "main.h"

/**
 * s_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: the integer to be tested
 *
 * Return: returns the 1 if n is prime number.
 **/
int is_prime_number(int n)
{
	int a;
	if (n < 2)
	{
		a = 0;
	}
	else if (((n % 2) == 0) || ((n % 3) == 0))
	{
		a = 0;
	}
	else if (((n % 2) != 0) && ((n % 3) != 0))
	{
		a = 1;
	}
	return (a);
}
