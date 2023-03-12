#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - compares to string characters and
 * return the first matching character
 * @s: string to search
 * @accept: string to compare
 * Return: a pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	char *tmp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		s++;
		accept = tmp;
	}
	return (NULL);
}
