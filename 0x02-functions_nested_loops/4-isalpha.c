#include "main.h"

/**
 * _isalpha - SA
 * @c: code checker
 * Return: always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
