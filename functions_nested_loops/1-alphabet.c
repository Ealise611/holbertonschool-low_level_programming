#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function prints the lowercase English alphabet
 * using the `_putchar` function, followed by a newline.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	_putchar(a);
	}

	_putchar('\n');

}
