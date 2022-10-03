#include "main.h"
#include <stdlib>

/**
 * _strdup - duplicate string to new allocated array
 * @str: string to be duplicted
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int size = o;
	char *ptr, *ret;

	if (!str)
		return (NULL);
	ptr = str;
	while (*ptr++)
		size++;
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (ret);
}
