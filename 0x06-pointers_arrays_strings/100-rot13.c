#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @: char
 * Return: 0
 */
char *rot13(char *s)
{
	int a;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		if ((s[a] > 64 && s[a] < 91) || (s[a] > 96 && s[a] < 123))
		{
			s[a] = (s[a] - 65 > 25) ?
				d[s[i] - 97] : c[s[i] - 65];
		}
	}
	return (s);
}
