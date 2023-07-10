#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: b
 */

char *_strdup(char *str)
{
	char *b;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	b = malloc(sizeof(char) * (a + 1));

	if (b == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		b[r] = str[r];

	return (b);
}
