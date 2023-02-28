#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte,
 * to the buffer pointed to by dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
