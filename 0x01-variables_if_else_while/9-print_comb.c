#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		if  (!(c == 9))
		{
			putchar(c + '0');
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(c + '0');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
