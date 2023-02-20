#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
