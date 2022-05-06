#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string to be concatenated upon
 * @s2: The string to be concatenated to s1
 *
 * Return: If concatenation fails - NULL
 */
char *str_concat(char *s1, char *s2)
{
char *add;
int i, j = 0, length = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
length++;
add = malloc(sizeof(char) * length);
if (add == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
add[j++] = s1[i];
for (i = 0; s2[i]; i++)
add[j++] = s2[i];
return (add);
}
