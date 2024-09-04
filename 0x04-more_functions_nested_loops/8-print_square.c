#include "main.h"
/**
 * print_square - print_square
 * @size: size is size
 * Return: always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, r;

		for (h = 0; h < size; h++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
