#include "main.h"

/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: Void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
