#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string into a new allocated memory
 * @str:  string to be copied
 * Return: a pointer to the new allocated memory
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int len, i = 0;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	if (len == 0)
		return (NULL);
	d = malloc(sizeof(char) * len + 1);
	if (i > len)
		return (NULL);
	while (i < len)
	{
		d[i] = str[i];
		i++;
	}
	return (d);
}
