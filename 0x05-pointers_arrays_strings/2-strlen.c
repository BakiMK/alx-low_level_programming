#include "main.h"
/**
*_strlen-Finds the length of string.
*@s:String pointer to the string whose length is to be found.
*Return:Length of the string.
*/

int _strlen(char *s)
{
	int p = 0;

		while (*(s + p) != 0)
		{
			p++;
		}
	return (p);
}
