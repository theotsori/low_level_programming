#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 to 9
 * @c: integer in use
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	return ((c != 0 && c <= 9) || (c = '0' && c <= '9'));
}
