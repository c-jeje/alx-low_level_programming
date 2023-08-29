#include <stdio.h>
#include "main.h"
#include <stdlib.h>  /* For using malloc */

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: s the buffer that the function will use to store the result
 * @size_r: buffer size of r
 *
 * Return: returns sum of he two numbers otherwise return 0 if size r is small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0; /* Carry to handle digit-wise addition */
	int i = 0; /* Index to track the position in the result buffer */
	int re = 0;

    /* Iterate until either of the input strings or the carry becomes zero */
	while (*n1 != '\0' || *n2 != '\0' || carry != 0)
	{
		/* Extract the digits from the input strings */
		int digit1 = (*n1 != '\0') ? *n1 - '0' : 0; /* Convert character to digit */
		int digit2 = (*n2 != '\0') ? *n2 - '0' : 0; /* Convert character to digit */
		int digitSum = digit1 + digit2 + carry; /* Sum of the digits and carry */

		carry = digitSum / 10; /* Calculate the carry */
		re = digitSum % 10; /* Calculate the remainder */

		/* Check if the result exceeds the buffer size */
		if (i >= size_r - 1)
			return (0); /* Return 0 if buffer size is insufficient */

		r[i] = re + '0'; /* Store the remainder as character in result buffer */
		i++; /* Increment the index to move to the next position in the buffer */

		/* Move to the next digit in the input strings */
		if (*n1 != '\0')
			n1++;
		if (*n2 != '\0')
			n2++;
	}

	r[i] = '\0'; /* Null-terminate the result string */

	return (r); /* Return a pointer to the result buffer */
}
