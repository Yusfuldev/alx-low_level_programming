#include "main.h"
/**
 * flip_bits - counts number flips needed for a number to get to another
 * @n: first number
 * @m: second number
 * Return: Number of bit flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m;
	int count = 0;

	while (diff)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
