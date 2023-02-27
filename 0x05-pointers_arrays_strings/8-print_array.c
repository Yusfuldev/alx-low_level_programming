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

	i =  0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
	}
	putchar('\n');
}
