#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: integer x counter
 *
 *Return: Void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

