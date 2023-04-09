#include "main.h"
/**
 * get_bit - Gets a bit at index
 * @n: The number to get bit from
 * @index: The index of the bit to get
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t s = sizeof(unsigned long int) * 8;

	if (index > s)
		return (-1);
	return ((n >> index) & 1);
}
