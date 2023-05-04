#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: pointer to binary to convert.
 * Return: converted unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, len = 0, n = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len > 0)
	{
		uint += (b[len - 1] - '0') << n;
		n++;
		len--;
	}
	return (uint);
}
