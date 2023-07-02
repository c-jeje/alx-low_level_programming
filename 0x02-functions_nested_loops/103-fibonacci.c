#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i;
	long num1, num2;
	long next_num, sumup;

	num1 = 1;
	num2 = 2;

	printf("%lu, ", num1);
	printf("%lu, ", num2);

	for (i = 3; i < 51; i++)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		
		if ((next_num <= 4000000) && (next_num % 2 == 0))
		{
			sumup = sumup + next_num;	
		}
	}
	sumup = sumup + num2;

	printf("%lu\n", sumup);

	return (0);
}

