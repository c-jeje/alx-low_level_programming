#include "main.h"

/** prints alphabet in lower 
* in lower case
*/

void print_alphabet(void)
{
	char c = 'a';
	
	for (int i = 0; i < 25; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
