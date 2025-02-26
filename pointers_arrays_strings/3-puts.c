#include "main.h"


/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a pointer to a character array (string) as its parameter
 * and outputs the string to the standard output (stdout), followed by a newline
 * character. It does not return any value.
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
