#include "main.h"
#include <ctype.h>
/**
  * _isdigit - checks if input is a digit
  * @c: integer to be printed
  * Return: isdig
  */

int _isdigit(int c)
{
	int isdig;
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (c == n && c != '\0')
			isdig = 1;
		else
			isdig = 0;
	}
	return (isdig);
}
