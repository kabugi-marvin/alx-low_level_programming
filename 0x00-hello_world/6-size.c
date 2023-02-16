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
int a;
long int b;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)\n", sizeof(x));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
