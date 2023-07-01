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
    int sum = 0;

    /* Perform addition of digits from right to left */
    int carry = 0;
    int i = 0;
    while (n1[i] != '\0' || n2[i] != '\0' || carry != 0)
    {
        /* Convert characters to integers and add them */
        int digit1 = n1[i] - '0';
        int digit2 = n2[i] - '0';
        int digitSum = digit1 + digit2 + carry;

        /* Calculate carry if digit sum is greater than 9 */
        carry = digitSum / 10;

        /* Calculate remainder to be stored in the result */
        int remainder = digitSum % 10;

        /* Store the remainder as character in the result */
        r[i] = remainder + '0';

        /* Increment index */
        i++;

        /* Check if result exceeds buffer size */
        if (i >= size_r)
            return r;
    }

    /* Null-terminate the result string */
    r[i] = '\0';

    return r;
}
