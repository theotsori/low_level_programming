#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 *
 * Return: s or 0
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
