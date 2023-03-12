#include "main.h"

/**
 * _memcpy - copies memory area feom src to dest
 * @dest: copy destination
 * @src: copy source
 * @n: size of memory to copy
 * Return: Return pointer to copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *cdest = dest, *csrc = src;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
	return (cdest);
}
