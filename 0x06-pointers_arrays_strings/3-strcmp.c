#include <string.h>

/**
 * _strcmp -  compares two strings.
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: signed integer depending on comparison
 */
int _strcmp(char *s1, char *s2)
{
	int length;
	int length2;

	length = strlen(s1);
	length2 = strlen(s2);
	if (length > length2)
		return (15);
	else if (length < length2)
		return (-15);
	else
		return (0);
}
