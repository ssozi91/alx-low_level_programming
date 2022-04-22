#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: hold each character after the count
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
