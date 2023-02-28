/**
 * swap_int -  swaps the values of two integers
 * @a: address of the value to be swapped
 * @b: address of the value to be swapped
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

