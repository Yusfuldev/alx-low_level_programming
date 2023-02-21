#include "main.h"

/**
  * print_alphabet_x10 - prints lowercas alphabets 10x
  *
  * Return: Nothing
  */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
