#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of b
 * @x: value to raise
 * @b: power
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (x * _pow_recursion(x, b - 1));
}
