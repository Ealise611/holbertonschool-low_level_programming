#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character.
 * @size: The size (height) of the triangle.
 *
 * Description:
 * - If size is 0 or less, it prints only a new line.
 * - The triangle is right-aligned, meaning each row starts with spaces
 *   followed by `#` characters.
 * - The number of `#` characters increases as we go down the rows.
 */

void print_triangle(int size)
{
	int row = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/*if( size > 0)*/

			while (row <= size)/*outer loop - rows*/
			{
				int spaces = size - row;
				int hash = 0;

				while (spaces > 0)
				{
					_putchar(' ');
					spaces--;
				}
				while (hash < row)
				{
					_putchar('#');
					hash++;
				}
				_putchar('\n');
				row++;
			}

	}
}
