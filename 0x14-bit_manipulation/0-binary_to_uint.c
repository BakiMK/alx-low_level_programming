#include "main.h"

/**
 * binary_to_uint - converts a binary numbers to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted numbers
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[c] - '0');
	}

	return (dec_v);
}
