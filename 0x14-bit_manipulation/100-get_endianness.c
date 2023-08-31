#include "main.h"

/**
 * get_endianness - the checks if a machine is little or big endian
 * Return: 0 big, 1 little
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *d = (char *) &b;

	return (*d);
}
