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
	int rev_arr[n];
	int k;

	int i = n - 1;
	int j = 0;
	while (i >= 0)
	{
		rev_arr[j] = a[i];
		j++;
		i--;

	}
	for (k = 0; k < n; k++)
	{
		a[k] = rev_arr[k];
	}
}
