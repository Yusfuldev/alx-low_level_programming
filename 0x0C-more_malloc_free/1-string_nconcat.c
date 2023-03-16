#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concats n srting to to another string
 * @s1: string character
 * @s2: string character
 * @n: number of char to concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char  *p;
	unsigned int i = 0, l1 = strlen(s1), l2 = strlen(s2);

	if (s1 ==  NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	if (n >= l2)
		n = l2;
	p = malloc(l1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (; i <= (l1 + n); i++)
	{
		if (i < l1)
		{
			p[i] = *s1;
			s1++;
		}
		else
			p[i] = *s2, s2++;
	}
	p[i] = '\0';
	return (p);
}
