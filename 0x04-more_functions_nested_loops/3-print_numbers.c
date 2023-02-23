#include "main.h"
/**
 * print_numbers - print numbers 1-9
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + '0');
	_putchar('\n');
}
