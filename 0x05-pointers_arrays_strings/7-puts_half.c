#include "main.h"
/**
  * puts_half - prints half of a given string
  * @str: input character.
  *Return: Nothing
  */

void puts_half(char *str)
{
	int i, n, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	if (i%2 != 0)
		n = (i -1)/2;
	else
		n = i/2;
	
	for (j = n + 1; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
