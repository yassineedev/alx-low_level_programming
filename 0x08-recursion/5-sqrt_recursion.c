#include "main.h"

/**
 * _sqrt_helper - a sqrt rec function helper
 * @n: n is a parameter
 * @nb: nb is a parameter
 *
 * Return: description
 */

int	_sqrt_helper(int n, int nb)
{
	if (nb * nb == n)
		return (nb);
	if (nb * nb > n)
		return (-1);
	return (_sqrt_helper(n, nb + 1));
}

/**
 * _sqrt_recursion - a rec function
 * @n: is a param
 *
 * Return: Calls the helper function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
