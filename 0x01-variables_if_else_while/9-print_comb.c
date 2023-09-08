#include <stdio.h>
#include <stdlib.h>
/**
 * main-The main function
 * Description: This is nothing
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
		for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar(10);
	return (0);
}
