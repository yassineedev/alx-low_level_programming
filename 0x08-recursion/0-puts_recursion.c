#include "main.h"

/**
 * _puts_recursive - Prints a string followed by a new line
 * @s: Pointer to the string
 *
 * This function prints characters one by one recursively until it
 * reaches the null terminator, then it prints a newline.
 */

void	_puts_recursive(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursive(s + 1);
}
