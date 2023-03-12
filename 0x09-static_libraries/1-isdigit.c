#include "main.h"
#include <ctype.h>
/**
  * _isdigit - checks if input is a digit
  * @c: integer to be printed
  * Return: isdig
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
