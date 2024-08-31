#include "main.h"
/**
 * _islower - prints lower cases
 *
 * 0c: means check the inputs
 *
 *  Return: Return 1 if 'c' is lower case and return 0 if it it's not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
