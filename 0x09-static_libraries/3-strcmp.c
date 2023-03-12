#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			dif  = *s1 - *s2;
			return (dif);
		}
		s1++, s2++;
	}
	return (dif);
}
