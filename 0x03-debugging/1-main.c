#include <stdio.h>

/**
 * main - causes an infinite loop
 * infinite loop caused by no increment in code line 16
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
