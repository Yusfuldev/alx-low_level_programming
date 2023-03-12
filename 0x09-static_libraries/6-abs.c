#include <stdlib.h>
#include "main.h"

/**
  * _abs - prints absolute value of numbers
  * @c: input parameter
  *
  * Return: ab
  */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}

