#include "main.h"
/**
 * print_last_digit - function that print last digit
 * @n: is int that return
 * Return: return last digit n
 */
int print_last_digit(int n)
{
	int r;
	if (n < 0)
		n = -n;

	r = n % 10;

	if (r < 0)
		r = -r;

	_putchar( r + '0');

	return (a);
}
