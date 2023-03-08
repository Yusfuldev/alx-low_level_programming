#include "main.h"
/**
 * _pow_recursion - prints a value raised to a power
 * @x: base value
 * @y: power value
 * Return: an integee
 */
int _pow_recursion(int x, int y)
{
	int s;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	s = x * _pow_recursion(x, y - 1);
	return (s);
}
