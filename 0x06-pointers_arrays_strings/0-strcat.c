#include "main.h"
#include <string.h>

/**
  * _strcat - concats to strings.
  * @dest: 1st string
  * @src: 2nd string
  *
  * Return: concatinated string
  */

char *_strcat(char *dest, char *src)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
