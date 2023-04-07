#include "main.h"
/**
 * binary_to_unit- converts binary to unsigned int
 * @b: binary to be converted
 * Return: Converted number otherwise 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	
	while (*b != '\0')
		b++;
	b-=1;
	while (b !=NULL && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal <<= 1;
		decimal += *b - '0';
		b--;
	}
	return (decimal);
}
