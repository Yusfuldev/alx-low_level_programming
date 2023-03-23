#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- print numbers followed by newline
 * @separator: pointer to string to be printed
 * @n: number of int passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int v = 0;
	va_list num;

	va_start(num, n);
	for (; i < n; i++)
	{
		if (separator == NULL)
			continue;
		v = va_arg(num, int);
		printf("%d", v);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);

}
