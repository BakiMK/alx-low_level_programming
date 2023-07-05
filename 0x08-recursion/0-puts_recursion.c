
#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @b: input
 * Return: 0
 */
void _puts_recursion(char *b)
{
	if (*b)
	{
		_putchar(*b);
		_puts_recursion(b + 1);
	}

	else
		_putchar('\n');
}
