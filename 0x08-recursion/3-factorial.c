#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @b: number to return the factorial from
 *
 * Return: factorial of b
 */

int factorial(int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (b * factorial(b - 1));
}
