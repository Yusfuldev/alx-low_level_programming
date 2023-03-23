#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by a new line.
 * @separator: An input string to be printed between strings.
 * @n: number of parameters
 * @...: Other parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list str;
	char *s = 0;

	va_start(str, n);
	for (; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
