#include "main.h"

/**
 * *string_toupper - function that change 
 * lowercase letters to uppercase
 * @*: asteris
 *
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i]<='v')
			s[i] = s[i] - 32;
	}
	return (s);
