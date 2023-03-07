#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the 1st occurence of the substring in the string
 * @haystack: string variable
 * @needle: string variable to search for
 * Return: pointer to the begining of located substring
 */

char *_strstr(char *haystack, char *needle)
{
char *n = needle, *h = haystack;

	while (*haystack)
	{
		h = haystack;
		needle = n;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = h + 1;
	}
	return (NULL);
}
