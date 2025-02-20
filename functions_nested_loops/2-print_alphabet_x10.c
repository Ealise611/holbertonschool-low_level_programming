#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the lowercase English alphabet
 * from 'a' to 'z' ten times, each followed by a newline.
 */


void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10 ; a++)
	{
		char b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
