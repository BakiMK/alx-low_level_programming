#include "main.h"

/**
 * flip_bits -the  counts the number of bits to change
 * to get from one number to another
 * @n: first numbers
 * @m: second numbers
 *
 * Return: numbers of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, co = 0;
	unsigned long int cur;
	unsigned long int exc = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		cur = exc >> b;
		if (cur & 1)
			co++;
	}

	return (co);
}

