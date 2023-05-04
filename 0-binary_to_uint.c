#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, len = 0;
	if (b == NULL)
		return (0);
	while (b)
		len++;
	while (*b != '\0')
	{
		if (*b != 0 || *b != 1)
			return (0);
		
		uint += *b << n;
		n++;
	}
	return (uint);
}
