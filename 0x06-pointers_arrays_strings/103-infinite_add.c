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
    int sum = atoi(n1) + atoi(n2);  /* Convert strings to integers and add them */

    int required_size = snprintf(NULL, 0, "%d", sum) + 1;  /* Calculate required size for the result */

    if (required_size > size_r)
        return r;  /* Return the original buffer if it's too small */

    snprintf(r, size_r, "%d", sum);  /* Store the sum as a string in the buffer 'r' */
    return r;
}
