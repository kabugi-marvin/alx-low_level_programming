#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on failure, returned pointer should point to
 * a newly allocated space in memory which contains the contents
 * of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	concat = malloc(sizeof(*concat) * ((strlen(s1)) + (strlen(s2) + 1)));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
