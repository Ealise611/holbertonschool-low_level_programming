#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/* prototypes */
typedef struct print
{
	char *specifier;
	void (*print_func)(va_list arg);
}print_t;

void print_char(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/*
 * print_all - this function prints anything that is passed in
 * @format: the characters that contains specifier
 *
 * Return: this function does not return anything
 */

void print_all(const char * const format, ...)
{
	int i; len;
	va_list args;
	va_start(args, format);

	print_t print[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	};

	len = 4;




	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
