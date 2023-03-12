#include "main.h"
#include <ctype.h>
/**
  * _islower - checks for lower case letters
  *
  * @c:  argument to chaeck
  *Return: 1 if true, 0 if otherwise
  */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}

	return (lower);
}
