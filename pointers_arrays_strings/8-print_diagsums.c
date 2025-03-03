#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of a square matrix (stored in 1D format).
 * @size: The size of the square matrix (number of rows/columns).
 *
 * Description: The function calculates the sum of the main diagonal
 * (top-left to bottom-right)
 * and the secondary diagonal (top-right to bottom-left)
 * of a square matrix and prints the results.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size ; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}


