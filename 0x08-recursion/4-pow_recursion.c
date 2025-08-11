#include "main.h"

/**
 * _pow_recursion - returns the power of a given number using x and y
 * @x: the number that will be powered
 * @y: the power.
 * Return: power of n, or - if n is negative
 */

int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
