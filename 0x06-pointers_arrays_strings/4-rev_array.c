#include "main.h"

/** 
 * reverse_array - reverses the content of an array of integers.
 * @a: variable array to be reversed
 * @n: number of integers inthe array
 * 
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int k;

	int i = n - 1;

	int j = 0;

	while (j < n / 2)
	{
		k = a[i];	/* temporary storage holde*/
		a[j] = a[i];	/*start value replaced by end value*/
		a[i] = k;	/*last value replaced by first value*/
		
		j++;
		/*i--;*/
	}
}
