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

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
