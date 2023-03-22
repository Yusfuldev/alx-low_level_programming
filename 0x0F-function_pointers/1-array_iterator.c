#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator- executes func given as parameter
 * @array: pointer to array to iterate
 * @size: size of array
 * @action: pointer to function to use
 * Return: nothing
 */
 void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if (array == NULL)
		return;
	for (; i < size; i++)
		action(*(array++));
}
