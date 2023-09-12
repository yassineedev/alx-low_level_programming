#include "main.h"
/**
 * print_sign - fonction
 * @a: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
}
