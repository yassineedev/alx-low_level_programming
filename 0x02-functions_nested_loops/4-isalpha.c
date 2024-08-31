#include "main.h"
/**
 * _isalpha - upper and lower case are return 1
 * @c: c is a char
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
