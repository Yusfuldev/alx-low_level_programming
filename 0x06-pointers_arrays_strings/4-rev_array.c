#include "main.h"

/**
  * reverse_array - rwverse strings
  * @a: array to reverse
  * @n: number of arrays to reverse
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
