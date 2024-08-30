#include "main.h"
/**
 * print_alphabet_x10 - print alphabets x10
 * Return: Return 0 always
 */
void print_alphabet_x10(void)
{
	char c = 'a', b = 9;

	for (b = 0; b <= 9; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
	}
}
