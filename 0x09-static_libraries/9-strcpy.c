#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int x = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for ( ; x < b ; x++)
	{
		dest[x] = src[x];
	}
	dest[b] = '\0';
	return (dest);
}
