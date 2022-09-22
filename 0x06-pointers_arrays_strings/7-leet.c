#include "main.h"

/**
 * leet - 1337 encryption
 * @s: char
 *
 * Return: 0
 */
char *leet(char *s)
{
	int a, b;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == a[b])
			{
				s[a] = b[b];
			}
		}
	}
	return (s);
}
