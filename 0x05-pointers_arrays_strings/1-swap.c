#include "main.h"

/**
 * swap_int - swaps a and b values
 * @a: point t value 1
 * @b: points to value 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
