#include "main.h"

int test_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * if n does not have a natural square root, the function should return -1
 * @n: the number to be tested
 *
 * Return: it returns natural square root
 **/
int _sqrt_recursion(int n)
{
	if ( n < 0)
	{
	return (-1);
	}
	return (test_sqrt(n, 0));
}

/**
 * test_sqrt - returns the natural square root of a number.
 * if n does not have a natural square root, the function should return -1
 * @n: the number to be tested
 * @i: numbers less than n
 *
 * Return: it returns natural square root
 **/
int test_sqrt(int n, int i)
{
	if ( i * i > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
	return (i);
	}
	return (test_sqrt(n, i + 1));
}
