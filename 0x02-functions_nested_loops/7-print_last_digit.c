#include "main.h"
#include <limits.h>
/**
  * print_last_digit -  prints last didgit of numbers
  * @n: input parameter
  *
  * Return: num
  */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;
	_putchar(num + '0');
	return (num);
}
