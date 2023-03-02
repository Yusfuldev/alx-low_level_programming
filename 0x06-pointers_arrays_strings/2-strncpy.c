#include "main.h"

/**
  * _strncpy - Copies n number of character
  * @dest: copy destination pointer
  * @src: string to copy
  * @n: number of string to be copied
  *
  * Return: The copied string pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	if (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
