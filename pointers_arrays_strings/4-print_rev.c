#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a pointer to a character array (string) as its parameter
 * and outputs the string in reverse.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[len] != '\0'; i++)
	{
		len++;
	}

	while (len != 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
