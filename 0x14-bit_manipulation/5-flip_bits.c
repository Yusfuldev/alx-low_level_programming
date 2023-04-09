#include "main.h"
/**
 * flip_bits - counts number flips needed for a number to get to another
 * @n: first number
 * @m: second number
 * Return: Number of bit flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m, count = 0;
	size_t s = sizeof(unsigned long int) * 8;
	int i = 0;

	for (i = s - 1; i >= 0; i--)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
