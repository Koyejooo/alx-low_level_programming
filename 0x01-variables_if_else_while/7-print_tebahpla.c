#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch++)
		putchar(ch);
	return (0);
}