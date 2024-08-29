#include <stdlib.h>
#include <stdio.h>
/**
* main - main is main
* des of my code
* Return: always 0
*/
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 101 && c != 113)
			putchar(c);
	}
		putchar('\n');
		return (0);
}
