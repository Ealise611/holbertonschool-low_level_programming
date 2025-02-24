#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints a straight line using the '_' character.
 * If n is greater than 0, it prints n underscores followed by a newline.
 * If n is 0 or less, it only prints a newline.
 *
 * Return: Nothing.
 */

void print_line(int n)
{

	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
