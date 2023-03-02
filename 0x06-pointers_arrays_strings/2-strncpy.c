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
char *ptr2 = src, *ptr = dest;
	int j = 0, k = 0;

	while (ptr2[j])
		j++;
	if (k > n)
		n = j;
	for (; k < n; k++)
	{
		ptr[k] = ptr2[k];
	}

	dest = '\0';
	return (ptr);
}
