
#include "main.h"
/**
 * clear_bit - sets value of a bit at index to 0
 * @n: pointer to the bits
 * @index: index to set the value
 * Return: 1 or on failure, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t s = sizeof(unsigned long int) * 8;

	if (index > s)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
