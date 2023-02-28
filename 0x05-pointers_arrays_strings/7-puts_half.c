#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: arguement to be passed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (length % 2 == 0)
		{
			if (i >= length / 2)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i > length / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
