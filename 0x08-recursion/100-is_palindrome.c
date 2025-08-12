#include "main.h"
/**
 * _strlen - clacul strlen
 * @s: is a string
 *
 * Return: the index - 1
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * _palindrome - palindrome rec helper
 * @s: is a string
 * @n: index 0
 * @len: len of ower string
 *
 * Return: Call back our function
 */

int	_palindrome(char *s, int n, int len)
{
	if (s[n] != s[len])
		return (0);
	if (n >= len)
		return (1);
	return (_palindrome(s, n + 1, len - 1));
}

/**
 * is_palindrome - get strlen from strlen - 1
 * @s: is a string
 *
 * Return: to the palindrome helper
 */

int	is_palindrome(char *s)
{
	int	len = _strlen(s) - 1;

	if (*s == '\0')
		return (1);
	return (_palindrome(s, 0, len));
}
