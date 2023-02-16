#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
float y;
char z;
long int a;
long long int b;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", sizeof(a));
printf("Size of a long long int: %llu byte(s)\n",
	(unsigned long long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
