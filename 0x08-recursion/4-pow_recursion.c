#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the first number
 * @y: the second number
 *
 * Return: returns x rased to the power of t.
 **/
int _pow_recursion(int x, int y)
{
	int a = 0;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
	{
		a = x * _pow_recursion(x, y - 1);
	}
	return (a);
}
