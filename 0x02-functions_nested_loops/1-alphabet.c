#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabets - print abc..xyz
 */
void print_alphabet(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
}
/**
 * main - main is main
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
