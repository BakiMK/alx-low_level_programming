#include "main.h"

int actual_prime(int b, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @b: number to evaluate
 *
 * Return: 1 if b is a prime number, 0 if not
 */
int is_prime_number(int b)
{
	if (b <= 1)
		return (0);
	return (actual_prime(b, b - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @b: number to evaluate
 * @i: iterator
 *
 * Return: 1 if b is prime, 0 if not
 */

int actual_prime(int b, int i)
{
	if (i == 1)
		return (1);
	if (b % i == 0 && i > 0)
		return (0);
	return (actual_prime(b, i - 1));
}
