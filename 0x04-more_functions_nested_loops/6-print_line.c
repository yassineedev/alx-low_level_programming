#include "main.h"
/**
 * print_line - print line
 * @n: n is int
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
			_putchar('_');
	}
	_putchar('\n');	
}
