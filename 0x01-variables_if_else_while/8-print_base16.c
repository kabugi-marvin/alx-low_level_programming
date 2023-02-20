#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	char c;

	x = 0;
	c = 'a';

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
