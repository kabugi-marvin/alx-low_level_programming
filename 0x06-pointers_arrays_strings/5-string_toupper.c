#include <string.h>
#include <ctype.h>

/**
 * string_toupper - converts a string to uppercase
 * @str: string to be passed
 *
 * Return: string converted to uppercase
 */
char *string_toupper(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] == '\\' && str[i + 1] == 'n')
			continue;
		else
			str[i] = toupper(str[i]);
	}
	return (str);
}

