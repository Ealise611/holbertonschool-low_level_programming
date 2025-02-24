#include"main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4,
 * followed by a new line.
 *
 * Return: Nothing
 */


void print_most_numbers(void)
{
	int a = 0;

	while ( a < 10)
	{
		if ( a == 2 || a == 4)
		{
			a++;
			continue;
			
		}

		_putchar(a++ + '0');
	}
	_putchar('\n');
}
