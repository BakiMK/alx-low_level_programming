#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @b: The string to be printed.
 */
void _print_rev_recursion(char *b)
{
	if (*b)
	{
		_print_rev_recursion(b + 1);
		_putchar(*b);
	}
}
