#include "main.h"

/**
 * print_last_digit - prints the last digit of the passed digit
 * @x: passed digit
 *
 * Return: the last digit of a value
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

