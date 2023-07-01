#include "main.h"

/**
 * _isalpha  - checks for alphabetic character
 * @c: integer number
 * Return: returns an integer value
 *
 */
int _isalpha(int c)
{
	return (((c >= 97) && (c <= 122)) || ((c >= 'A') && (c <= 'Z')));
}
