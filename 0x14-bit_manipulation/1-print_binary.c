#include "main.h"

/**
 * print_binary -the prints the binary equivalent of a decimal number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	int b, cou = 0;
	unsigned long int cur;

	for (b = 63; b >= 0; b--)
	{
		cur = n >> b;

		if (cur & 1)
		{
			_putchar('1');
			cou++;
		}
		else if (cou)
			_putchar('0');
	}
	if (!cou)
		_putchar('0');
}
