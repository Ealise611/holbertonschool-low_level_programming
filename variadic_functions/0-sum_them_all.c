#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Computes the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of arguments to be summed.
 *
 * Return: The sum of all parameters.
 *         If n == 0, returns 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int total = 0;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(nums, unsigned int);
	}
	va_end(nums);
	return (total);
}



