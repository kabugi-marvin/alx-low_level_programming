#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string.
 * if successful.It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *addr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	addr = malloc(sizeof(*addr) * (strlen(str) + 1));
	if (addr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		addr[i] = str[i];
	}
	return (addr);
}
