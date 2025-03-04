#include "main.h"

/**
 * _puts_recursion - functions that prints a string
 * @s: pointer to char that needs to print
 *
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
