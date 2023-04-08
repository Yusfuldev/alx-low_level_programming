#include "main.h"

void print_binary(unsigned long int n)
{
	size_t s = sizeof(unsigned long int) * 8;
	int i = s - 1, f = 0;

	if (n == 0)
		_putchar('0');

	while (i >= 0)
	{
		if (1 & (n >> i))
		{
			_putchar('1');
			f = 1;
		} else if (f == 1)
		{
			_putchar('0');
		}
		i--;
	}
}
