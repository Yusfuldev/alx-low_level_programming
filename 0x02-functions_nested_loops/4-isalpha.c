#include "main.h"
#include <ctype.h>

/**
  * _isalpha - checks for alphabet
  *
  * @c: input character
  *
  * Return: alpha
  */

int _isalpha(int c)
{
	char lower, upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isalpha = 1;
		}
	}
	return  (isalpha);
}
