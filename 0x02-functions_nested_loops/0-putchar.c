#include <stdio.h>
/*#include "_putchar.c"*/

/**
  * main - Entry point
  *
  * Return: 0
  */

int main(void)
{
	char m[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(m[i]);

	putchar('\n');

	return (0);
}
