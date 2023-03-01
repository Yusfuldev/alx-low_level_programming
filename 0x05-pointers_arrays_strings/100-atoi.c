#include <stdio.h>
#include "main.h"

/**
  * _atoi - converts string to integer
  * @s: An input string
  * Return: integer from conversion
  */

int _atoi(char *s)
{
	int sn = 1;
	signed int tt = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sn *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			tt = tt * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sn < 0)
		tt = (-tt);

	return (tt);
}
