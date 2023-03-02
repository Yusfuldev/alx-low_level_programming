#include "main.h"

/**
  * reverse_array - rwverse strings
  * @a: array to reverse
  * @n: number of arrays to reverse
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i, j, k = 0;
	char c;

	while (a[n] != '\0' && k < n)
		k++;
	n = k;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		if (i == j)
			break;

		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
