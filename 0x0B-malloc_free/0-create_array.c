#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to an array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ca = malloc(sizeof(*ca) * size);
	if (ca == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ca[i] = c;
	}
	return (ca);
}
