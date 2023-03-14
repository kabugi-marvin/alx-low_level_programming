#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: rows
 * @height: columns
 *
 * Return: return NULL on failure, If width or
 * height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **myarr;
	int i;
	int m;
	int k;

	if (width == 0 || height == 0 || height < 0 || width < 0)
	{
		return (NULL);
	}

	myarr = malloc(sizeof(int *) * width);
	if (myarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		myarr[i] = malloc(sizeof(*myarr) * height);
	}
	for (k = 0; k < width; k++)
	{
		for (m = 0; m < width; m++)
		{
			myarr[k][m] = 0;
		}
	}
	return (myarr);
}

