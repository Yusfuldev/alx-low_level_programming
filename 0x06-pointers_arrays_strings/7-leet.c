#include "main.h"

/**
  * leet - encodes letters of a string
  * @c: string character pointer
  * Return: encoded character
  */

char *leet(char *s)
{
	int  k, i = 0;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	c[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	
	while (s[i])
	{
		for (k = 0; k < 10; k++)
			if (s[i] == c[k])
				s[i] = sub[k];
		i++;
	}
	return (s);
}
