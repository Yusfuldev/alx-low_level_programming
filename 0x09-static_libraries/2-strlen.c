#include "main.h"
/**
  * _strlen  - prints length of a string
  * @s: string's length to be printed.
  * Return: len
  */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;

	return (l);
}
