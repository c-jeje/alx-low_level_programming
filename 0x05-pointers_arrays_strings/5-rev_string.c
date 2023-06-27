#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string in reverse, followed by a new line
 * @s: string to be printed
 */
void rev_string(char *s)
{
    int i, j;
    char temp;

    // Find the length of the string
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    j = i - 1;  // Index of the last character in the original string

    // Reverse the string by swapping characters from the start and end
    for (int k = 0; k < i / 2; k++)
    {
        temp = s[k];
        s[k] = s[j];
        s[j] = temp;
        j--;
    }
}
