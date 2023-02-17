#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(i % x  + '0');
	}
	putchar('\n');
	return (0);
}
