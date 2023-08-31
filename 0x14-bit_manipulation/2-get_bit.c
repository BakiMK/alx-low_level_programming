#include "main.h"

/**
 * get_bit - returns the values of a bit at an index in a decimal number
 * @n: number to searchs
 * @index: index of the bits
 *
 * Return: value of the bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
