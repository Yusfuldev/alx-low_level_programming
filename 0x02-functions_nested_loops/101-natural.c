 #include <stdio.h>

/**
 * main - Print sum of all multiples of 3 or 5 upto 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			i += i;
			i++;
		}
	}
	printf("%d\n", i);
		return (0);
}
