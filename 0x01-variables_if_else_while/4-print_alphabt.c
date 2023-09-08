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
		for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
		putchar(n);
	}
		putchar(10);
	return (0);
}
