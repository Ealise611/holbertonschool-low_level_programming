#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: A 2D array representing the chessboard.
 *
 * Description: This function prints an 8x8 chessboard using the elements
 * stored in the 2D array `a`. Each row of the chessboard is printed on
 * a new line, and after printing all 8 rows, a newline character is added.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
