#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	for (int i = c; i<= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
