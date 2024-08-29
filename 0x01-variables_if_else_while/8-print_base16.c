#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
}
/**
 * print_alpha - print alphabets
 */
void print_alpha(void)
{
	int a;

	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
}
/**
 * main - main is main
 * des of my code
 * Return: always 0
 */
int main(void)
{
	print_numbers();
	print_alpha();
	putchar('\n');
	return (0);
}
