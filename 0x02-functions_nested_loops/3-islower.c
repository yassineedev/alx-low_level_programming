#include "main.h"

/**
 * _islower - code checker
 * @c: parametre here
 * Return: always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
