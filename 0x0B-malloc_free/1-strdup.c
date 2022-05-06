
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	for (j = 0; j <= i; j++)
		new[j] = str[j];
	new[j + 1] = '\0';
	return (new);
}
