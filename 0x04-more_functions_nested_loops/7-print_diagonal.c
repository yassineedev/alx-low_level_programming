#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: n is int
 * Return: always 0
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (a > b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
