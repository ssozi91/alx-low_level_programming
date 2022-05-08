#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= n)
		n = j;
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (k = 0; k < n; k++)
		ptr[k + i] = s2[k];
	ptr[k + i] = '\0';
	return (ptr);
}
