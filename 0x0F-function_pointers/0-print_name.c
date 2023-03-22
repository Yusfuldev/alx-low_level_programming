#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name- prints a name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
