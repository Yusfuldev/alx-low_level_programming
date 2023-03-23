#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- sums all its parameters.
 * @n: number of parameters/args.
 * Return: sum of its params
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int v = 0;
	va_list par;

	va_start(par, n);
	for (; i < n; i++)
	{
		v += va_arg(par, int);
	}
	va_end(par);
	return (v);
}
