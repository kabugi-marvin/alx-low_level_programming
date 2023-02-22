#include <ctype.h>

/**
 * _isalpha - checks whether a character is in uppercase
 * @c: The number to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
