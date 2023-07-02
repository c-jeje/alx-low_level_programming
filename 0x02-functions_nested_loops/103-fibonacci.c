#include <stdio.h>

/**
 * main - finds and prints sum even-valued terms
 * followed by a new line.
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i;
	unsigned long int num1, num2;
	unsigned long int next_num, sumup;

	num1 = 1;
	num2 = 2;
	sumup = 2;

	for (i = 3; i < 51; i++)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;

		if ((next_num < 4000000) && ((next_num % 2) == 0))
		{
			sumup = sumup + next_num;
		}
		else
		{
			sumup = sumup;
		}
	}
	printf("%lu\n", sumup);

	return (0);
}

