#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: number of elements in the array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int x;
	int i;

	i = 0;
	while (i < n / 2)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
		i++;
	}
}
