#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
        char c = 'a';
		int i;
		int t = 1;

        while (t < 11)
		{	
		for (i = 1; i < 27; i++)
		{
		_putchar(c);
		c++;
		}
		t++;
		}
		_putchar('\n');
}
