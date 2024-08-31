#include "main.h"
/**
 * print_sign - test n if is it + or - or 0
 * @n: is int
 * Return: between -1 , 1 and 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		return (0);
		_putchar('0');
	}
	else if (n < '0')
	{
		_putchar('-');
	}
		return (-1);
}
