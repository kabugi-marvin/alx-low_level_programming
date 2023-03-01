#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: maximum bytes to be used
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
