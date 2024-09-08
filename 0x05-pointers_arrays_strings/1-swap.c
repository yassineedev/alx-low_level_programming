#include "main.h"
/**
 * swap_init - swap init
 * @a: is a pointer
 * @b: sins of a
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
