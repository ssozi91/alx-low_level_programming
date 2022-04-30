#include "main.h"
/**
 * length - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int length(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += length(s + len);
}
return (len);
}

/**
 * check - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (check(s, len, index + 1));
return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
int index = 0;
int len = length(s);
if (!(*s))
return (1);
return (check(s, len, index));
}
