#include "main.h"
/**
  * swap_int - swaps the value of two integers
  * @a: int to be swapped.
  * @b: 2nd int to be swapped.
  * Return: nothing.
  */

  void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
