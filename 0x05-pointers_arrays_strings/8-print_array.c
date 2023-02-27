#include <stdio.h>
#include "main.h"

/**
  * print_array - prints array of string char.
  * @a: pointer
  * @n: number of afray to be printed
  *Return: Nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
