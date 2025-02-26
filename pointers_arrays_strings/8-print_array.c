#include "main.h"
#include <stdio.h>


/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements of the array to be printed.
 *
 * Description:
 * This function prints the first n elements of the array pointed to by 'a'.
 * The numbers are printed in the same order as they are stored in the array,
 * separated by a comma and a space. A new line is printed
 * after the last element.
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count < n - 1)
		{
			printf("%d, ", a[count]);
			count++;
		}
		else
		{
			printf("%d", a[count]);
			count++;
		}
	}
	printf("\n");
}

