#include "main.h"

/**
 * main - Entry point
 *
 * Description - program that writes a - z in small letters
 *
 * Return: always zero
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
