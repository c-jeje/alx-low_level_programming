#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i;
	long int  num1, num2;
	long next_num;

	num1 = 1;
	num2 = 2;

	printf("%lu, ", num1);
	printf("%lu, ", num2);

	for (i = 3; i < 99; i++)
	{
		if (i == 98)
		{
			next_num = num1 + num2;
			printf("%lu\n", next_num);
		}
		else if (i != 98)
		{
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
			printf("%lu, ", next_num);
		}
	}
	return (0);
}

