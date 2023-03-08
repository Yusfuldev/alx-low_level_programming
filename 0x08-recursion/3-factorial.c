#include "main.h"

/**
 * factorial - prints factorial of a;number
 * @n: input character of number
 * Return: int
 */

int factorial(int n)
{
	int s;

	if (n < 0)
		return (-1);
	if (n == 0)
		return  (1);
	s = n * factorial(n - 1);
	return (s);
}
