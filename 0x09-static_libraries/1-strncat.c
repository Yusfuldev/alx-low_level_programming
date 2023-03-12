#include "main.h"

/**
  * _strncat - concats two strings
  * @dest: destination of concat
  * @src: source of string
  * @n: number of bytes to be concat
  *
  * Return: returns a pointer to the dest
  */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr2 = src, *ptr = dest;
	int i = 0, j = 0, k;

	while (ptr[i])
		i++;

	while (ptr2[j])
		j++;
	if (n > i)
		n = i;
	for (k = 0; k < n; k++, i++)
	{
		ptr[i] = ptr2[k];
	}

	dest = '\0';
	return (ptr);
}
