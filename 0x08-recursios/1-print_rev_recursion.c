#include "main.h"

/**
  * _print_rev_recursion - prints a sring in reverse
  *
  * @s: is the string to be printed in reverse
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
