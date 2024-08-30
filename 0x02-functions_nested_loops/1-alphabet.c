#include "main.h"
/**
 * print_alphabet - print abc..xyz
 * Return: always 0
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
}
