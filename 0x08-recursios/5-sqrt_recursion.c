#include "main.h"
/**
  * Sqrt - returns Square root of a number
  * @number: Number whose square root is to be determined
  * @sqrt_num: Square root of a number ;number
  * Return: If the number has a natural square root - the square root.
  */
int Sqrt(int number, int sqrt_num)
{
	if (number == sqrt_num * sqrt_num)
	{
		return (sqrt_num);
	}
	if (number / 2 == sqrt_num)
	{
		return (-1);
	}
	return (Sqrt(number, (sqrt_num + 1)));
}

/**
  * _sqrt_recursion - Returns natural square root of a number
  * @n: Number whose square root is to be determined
  * Return: If n has a natural square root - the natural square root of n.
  */
int _sqrt_recursion(int n)
{
	int sqrt_num = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (Sqrt(n, sqrt_num));
	}
}
