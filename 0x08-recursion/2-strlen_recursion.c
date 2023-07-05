#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @b: The string to be measured.
 * Return: longit
 */

int _strlen_recursion(char *b)
{
	int longit = 0;

	if (*b)
	{
		longit++;
		longit += _strlen_recursion(b + 1);
	}

	return (longit);
}
