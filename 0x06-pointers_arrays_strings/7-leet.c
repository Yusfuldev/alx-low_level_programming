#include "main.h"

/**
  * leet - encodes letters of a string
  * @c: string character pointer
  * Return: encoded character
  */

char *leet(char *s)
{
	int  k, i = 0;
	char sub[10] = "4433007711";
	char c[10] = "aAeEoOtTlL";
	
	while (s[i] != '\0')
	{
		for (k = 0; k < 10; k++)
			if (s[i] == c[k])
				s[i] = sub[k];
		i++;
	}
	return (s);
}
