#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for character in a given string
 * @s: string to search
 * @c: character to be searched for
 * Return: return a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
