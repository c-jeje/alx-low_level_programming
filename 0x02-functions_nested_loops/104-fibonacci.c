#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns zero a success
 */
int main(void)
{
	int i;
	long int num1, num2;
	long int next_num;

	num1 = 1;
	num2 = 2;
	i = 0;

	while (i != 98)
	{
		if (num1 < 10)
		{
			if ((num1 == 2) || (num1 == 1))
			{	
				printf("%lu, ", num1);
				i++;
			}
		}
		else if ((num1 >= 10) && (num1 < 100))
		{
			if (((num1 / 10) == 1) || ((num1 / 10) == 2))
			{
				printf("%lu, ", num1);
				i++;
			}
		}
		else if ((num1 >= 100) && (num1 < 1000))
		{
			if (((num1 / 100) == 1) || ((num1 / 100) == 2))
			{
				printf("%lu, ", num1);
				i++;
			}
		}

		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
	}
	return (0);
}
