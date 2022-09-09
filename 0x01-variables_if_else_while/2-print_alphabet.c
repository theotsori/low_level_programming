#include <stdio.h>

/**
 * main - entry point program to print a to z
 *
 * Return: always 0
 */
int main(void)
{
	for (c = 'a'; c <= 'z'; ++c)
	{
		c = tolower(c);
		putchar(c);
	}
	return (0);
}
