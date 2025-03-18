#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @n: number of strings pass into function
 * @separator: the string to be printed between strings
 *
 * Description: This function takes strings and print them, seperated by the given separator string.
 * if separator is NULL, dont print. if one of the string in NULL print (nil), follow by new line.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
	       	if (str == NULL)
                {
                        str = "(nil)";
                }
		printf("%s", str);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
