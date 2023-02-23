#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: char arguement
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
