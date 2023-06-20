#include "main.h"
/**
* check if char is small letters
* 
* Return: one if char is small letters, otherwise zero.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
