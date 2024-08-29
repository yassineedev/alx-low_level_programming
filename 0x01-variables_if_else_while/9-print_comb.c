#include <stdio.h>
/**
 * main - main is main
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
		putchar('\n');
		return (0);
}
