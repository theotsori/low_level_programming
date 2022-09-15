#include "main.h"

/**
 * _isupper - used to check for uppercase characters
 * @c: working integer
 *
 * Return: 0
 */
int _isupper(int c)
{
	return ((c != 'a' && c <= 'z') || (c = 'A' && c <= 'Z'));
}
