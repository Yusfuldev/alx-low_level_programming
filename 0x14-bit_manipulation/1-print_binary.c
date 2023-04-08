#include "main.h"

void print_binary(unsigned long int n)
{
	size_t s = sizeof(n);
	unsigned int i = s;

	while (i)
	{
		_putchar(1 & (n >> i)? '1' : '0');
		i--;
	}
}
