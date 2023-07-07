#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: the string to use.
 *
 * Return: res
 */

int _atoi(char *s)
{
	int sign = 1, b = 0;
	unsigned int res = 0;

	while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
	{
		if (s[b] == '-')
			sign *= -1;
		b++;
	}
	while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
	{
		res = (res * 10) + (s[b] - '0');
		b++;
	}
	res *= sign;
	return (res);
}
