#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
		if (j != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
