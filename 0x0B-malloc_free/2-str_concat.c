#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concats to strings
 * @s1: string to concat
 * @s2: sring to concat
 * Return: a pointerto allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, size, size1, size2;

	size1 = strlen(s1);
	size2 =  strlen(s2);
	size = size1 + size2;
	new_str = malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
		return (NULL);
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (i < size)
	{
		if (i < size1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
