#include "main.h"

/**
 * binary_to_uint- converts binary to unsigned int
 * @b: binary to be converted
 * Return: Converted number otherwise 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result <<= 1;
			result += (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

