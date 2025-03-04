#include "main.h"

/**
 * _print_rev_recursion - functions that prints a string in reverse
 * @s: pointer to char that needs to print
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

