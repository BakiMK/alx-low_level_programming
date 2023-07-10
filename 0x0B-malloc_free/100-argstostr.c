#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	int b, a, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (a = 0; av[b][a]; a++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (a = 0; av[b][a]; a++)
	{
		str[r] = av[b][a];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
