#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: string pointer
 * @src: string pointer
 * @n: maximum bytes to be copied
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*int length;*/
	int length_src;
	int i;

	/*length = strlen(dest);*/
	length_src = strlen(src);
	for (i = 0; i <= n - 1; i++)
	{
		if (length_src < n && src[i] == '\0')
			dest[i] = '\0';
		else if (i > length_src)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
