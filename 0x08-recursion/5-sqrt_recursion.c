#include "main.h"

int actual_sqrt_recursion(int b, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @b: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int b)
{
	if (b < 0)
		return (-1);
	return (actual_sqrt_recursion(b, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 */

int actual_sqrt_recursion(int b, int i)
{
	if (i * i > b)
		return (-1);
	if (i * i == b)
		return (i);
	return (actual_sqrt_recursion(b, i + 1));
}
