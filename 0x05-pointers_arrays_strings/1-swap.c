#include "main.h"
/**
* swap_int-Swaps the values of two integers.
* @a:First argument must be swapped.
* @b:second argument must be swapped.
* Return:nothing
*/
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
