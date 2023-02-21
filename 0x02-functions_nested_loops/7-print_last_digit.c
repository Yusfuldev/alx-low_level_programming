#include "main.h"

/**
  * print_last_digit -  prints last didgit of numbers
  * @n: input parameter
  *
  * Return: num
  */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = _putchar(-n % 10 + '0');
		return (num);
	}
	else
	{
		num = _putchar(n % 10 + '0');
		return (num);
	}
}
