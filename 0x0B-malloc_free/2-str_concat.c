#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: conct
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int b, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b = ci = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (b + ci + 1));

	if (conct == NULL)
		return (NULL);
	b = ci = 0;
	while (s1[b] != '\0')
	{
		conct[b] = s1[b];
		b++;
	}

	while (s2[ci] != '\0')
	{
		conct[b] = s2[ci];
		b++, ci++;
	}
	conct[b] = '\0';

	return (conct);
}
