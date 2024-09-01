#include "main.h"
/**
 * print_last_digit - function that print last digit
 * @n: is int that return
 * Return: return last digit n
 */
int print_last_digit(int n)
{
	int a;
	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar( a + '0');

	return (a);
}
