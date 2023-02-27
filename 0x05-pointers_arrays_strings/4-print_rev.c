#include "main.h"
/**
  * print_rev  - prints a string to stdout in reverse
  * @s: string to be printed
  *Return: 0
  */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i)
		_putchar(s[--i]);
	_putchar('\n');
}
