#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index- searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function to use
 * Return: -1 on failure otherwise return something else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp == 0)
			return (-1);
		if (cmp(array[i]))
			return (i);
		if (i == size)
			return (-1);
	}
	return (-1);
}
