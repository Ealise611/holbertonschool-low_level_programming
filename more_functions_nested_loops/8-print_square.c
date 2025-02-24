#include "main.h"

/**
 * print_square - Prints a square of hash (#) characters.
 * @size: The size of the square.
 *
 * Description: The function prints a square using the hash character (#).
 *              The number of rows and columns in the square will be equal to
 *              the value of size. If size is 0 or less, only a new line will
 *              be printed, with no square. The square is printed line by line.
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int row = 0;
	int colums;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			colums = 0;
			while (colums < size)
			{
				_putchar('#');
				colums++;
			}
		row++;
		_putchar('\n');
		}
	}
}
