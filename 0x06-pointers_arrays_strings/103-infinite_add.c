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
    int carry = 0;
    int i = 0;
	int re = 0;
    while (n1[i] != '\0' || n2[i] != '\0' || carry != 0)
    {
        int digit1 = n1[i] - '0';
        int digit2 = n2[i] - '0';
        int digitSum = digit1 + digit2 + carry;

        carry = digitSum / 10;
        re = digitSum % 10;

        r[i] = re + '0';
        i++;

        if (i >= size_r)
            break;
    }

    r[i] = '\0';

    return r;
}
