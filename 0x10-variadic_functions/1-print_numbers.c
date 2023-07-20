#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @b: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int b, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, b);

	for (index = 0; index < b; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (b - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
