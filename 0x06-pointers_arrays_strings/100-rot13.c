#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int i, j;

	char *b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *k = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = k[j];
				break;
			}
		}
	}

	return (s);
}
