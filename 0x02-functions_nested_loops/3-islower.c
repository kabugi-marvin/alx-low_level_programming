#include <ctype.h>

/**
 * _islower - checks whether a character is lowercase
 * @c: number to be checked
 *
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
