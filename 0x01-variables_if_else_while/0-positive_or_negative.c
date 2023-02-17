#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * @n - Saves random numbers
 *
 * Return: 0
 */

int main(void)
{
	int n = 2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d\n is zero", n);
	else if (n > 0)
		printf("%d\n is positive", n);
	else if(n < 0)
		printf("%d\n is negative", n);
	return (0);
}
