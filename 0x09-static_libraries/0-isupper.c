#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: input character to be printed
 * Return: isupper.
 */
int _isupper(int c)
{
	int upper, isupper = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			isupper = 1;
	}
	return (isupper);
}
