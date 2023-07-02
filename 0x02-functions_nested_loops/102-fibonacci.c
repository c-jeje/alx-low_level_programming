#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i, num1, num2;
	unsigned long int next_num;

	num1 = 1;
	num2 = 2;

	printf("%d, ", num1);
	printf("%d, ", num2);

	for (i = 3; i < 51; i++)
	{
		if (i == 50)
		{
			next_num = num1 + num2;
			printf("%ld\n", next_num);
		}
		else if (i != 50)
		{
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
			printf("%ld, ", next_num);
		}
	}
	return (0);
}

