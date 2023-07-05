#include "main.h"

int check_pal(char *b, int i, int len);
int _strlen_recursion(char *b);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *b)
{
	if (*b == 0)
		return (1);
	return (check_pal(b, 0, _strlen_recursion(b)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @b: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *b)
{
	if (*b == '\0')
		return (0);
	return (1 + _strlen_recursion(b + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @b: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *b, int i, int len)
{
	if (*(b + i) != *(b + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(b, i + 1, len - 1));
}
