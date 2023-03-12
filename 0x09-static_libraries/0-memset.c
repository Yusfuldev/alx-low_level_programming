#include "main.h"

/**
 * _memset - fills up a memory with specified character
 * n times
 * @s: pointer to memory to be filled
 * @b: character to be filled in
 * @n: number of character to be filled
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *temp = s;

	for (i = 0; i < n; i++)
	{
		temp[i] = b;
	}
	return (temp);
}
