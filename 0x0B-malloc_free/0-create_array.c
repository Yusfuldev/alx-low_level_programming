#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size no of memory
 * @c: array char to allocate memory to
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
