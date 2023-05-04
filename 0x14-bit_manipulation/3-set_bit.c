#include "main.h"

/**
 * set_bit - set bit at a given index to 1
 * @n: pointer to the given number.
 * @index: index to be set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int s = sizeof(unsigned long int) * 8;

        if (index > s)
                return (-1);
        *n |= (1 << index);
        return (1);
}
