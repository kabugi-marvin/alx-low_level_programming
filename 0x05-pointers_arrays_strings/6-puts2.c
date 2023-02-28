#include <string.h>
#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

