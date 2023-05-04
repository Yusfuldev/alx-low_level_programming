#include "main.h"

/**
 * flip_bits - count number of bits to be flipped
 * @n: one num
 * @m: the other num
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
