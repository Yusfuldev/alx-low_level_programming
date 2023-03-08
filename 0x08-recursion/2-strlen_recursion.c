#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string's length to be printed
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return ( 1 + _strlen_recursion(s + 1));
	}
	return(0);
}
