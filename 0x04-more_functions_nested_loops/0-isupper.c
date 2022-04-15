#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 for success and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
