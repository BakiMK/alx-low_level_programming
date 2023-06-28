#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int count = 0, b;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(s + count) == low_letters[b] || *(s + count) == upp_letters[b])
			{
				*(s + count) = numbers[b];
				break;
			}
		}
	count++;
	}

	return (s);
}
