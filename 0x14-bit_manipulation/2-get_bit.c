#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 99)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
