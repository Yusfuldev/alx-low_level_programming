#include "main.h"
/**
 * get_bit- get the value of a bit at a given index.
 * @n: number to get index from.
 * @index: index to get number from.
 * Return: value of the bit at index index or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}
	for (; i >= 0; i--)
	{
		if (i == (int)index)
			return ((n >> i) & 1);
	}
	return (-1);
}
