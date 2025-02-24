#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: The function draws a diagonal line on the terminal
 *              by printing the character '\' a number of times
 *              specified by n. Each '\' will be printed on a new
 *              line with appropriate spaces to form the diagonal.
 *              If n is 0 or less, only a newline is printed.
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{ /*create a loop that spaces n-1 spaces if n > 0, then print \*/
/*print a character return*/
	int spaces;
	int rows = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (rows <= n)/*outer loop - rows*/
		{
			spaces = 1;

			while (spaces < rows)/*innter loop - spaces*/
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			rows++;
		}
	}
}
