#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *starting with 1 and 2
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i;
	unsigned long int num1, num2;
	unsigned long int next_num;

	num1 = 1;
	num2 = 2;
	i = 1;

	while (i <= 95)
	{
		printf("%lu, ", num1);
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		i++;
	}
	printf("\n");
	return (0);
}
