#include "main.h"

/**
 *Function -takes a pointer to an int
 *Returns void
*/
void reset_to_98(int *n)
{
	int i = 2;
	*n = &i;
	*n = 98;
}
