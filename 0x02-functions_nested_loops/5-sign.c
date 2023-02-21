#include "main.h"
/**
  * print_sign - prints sign of a number
  *
  * @n: number input
  *
  * Return: sign
  */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else
	{
		_putchar('-');
		sign =-1;
	}
	_putcbar('\n');
	return (sign);
}
