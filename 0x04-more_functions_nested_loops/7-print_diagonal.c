#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: n is int
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
			_putchar(' ');
	}

	_putchar(92);
	_putchar('\n');
}
