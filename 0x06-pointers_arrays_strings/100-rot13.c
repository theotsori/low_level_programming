#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @'': char
 * Return: 0
 */
char *rot13(char *)
{
	int a, b;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; *[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (*[a] == c[b])
			{
				*[a] = d[b];
				break;
			}
		}
	}
	return (*);
}
