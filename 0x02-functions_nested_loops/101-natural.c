#include <stdio.h>

/**
 * main - Print sum of all multiples of 3 or 5 upto 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int n, i = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			i += n;
		}
		n++;
	}
	printf("%d\n", i);
	return (0);
}
