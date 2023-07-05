#include "main.h"

/**
 * wildcmp - Compare strings
 * @b1: pointer to string params
 * @b2: pointer to string params
 * Return: 0
 */

int wildcmp(char *b1, char *b2)
{
	if (*b1 == '\0')
	{
		if (*b2 != '\0' && *b2 == '*')
		{
			return (wildcmp(b1, b2 + 1));
		}
		return (*b2 == '\0');
	}
	if (*b2 == '*')
	{
		return (wildcmp(b1 + 1, b2) || wildcmp(b1, b2 + 1));
	}
	else if (*b1 == *b2)
	{
		return (wildcmp(b1 + 1, b2 + 1));
	}
	return (0);
}
