#include "main.h"
/**
 * binary_to_uint- converts binary to unsigned int
 * @b: binary to be converted
 * Return: Converted number otherwise 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (!b)
		return (0);

	if (b[i] != '\0')
	{
		while (b[i] != '\0')
			i++;

		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			result += (b[i] - '0') << i;
			i--;
		}

		return (result);
	}
	return (0);
}
