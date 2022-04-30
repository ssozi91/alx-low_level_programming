#include "main.h"

/**
 * prime - Checks if a number is divisible.
 * @number: The number to be checked.
 * @divisor: The divisor.
 *
 * Return: 0 if the number is divisible
 *         1 if the number is not divisible
 */
int prime(int number, int divisor)
{
if (number % divisor == 0)
return (0);
if (divisor == number / 2)
return (1);
return (prime(number, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 0 if the integer is not prime
 *         1 if the number is primee
 */
int is_prime_number(int n)
{
int divisor = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (prime(n, divisor));
}
