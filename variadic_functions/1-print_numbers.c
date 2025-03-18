#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integer arguments
 * and prints them, separated by the given separator string. If the separator
 * is NULL, it is not printed. A new line is printed at the end.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int nums;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, unsigned int);
		printf("%d", nums);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
