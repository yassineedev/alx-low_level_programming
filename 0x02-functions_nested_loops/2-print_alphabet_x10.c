#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char sa;
	int i;

	i = 0;

	while (i < 10)
	{
		sa = 'a';
		while (sa <= 'z')
		{
			_putchar(sa);
			sa++;
		}
		_putchar('\n');
		i++;
	}
}
