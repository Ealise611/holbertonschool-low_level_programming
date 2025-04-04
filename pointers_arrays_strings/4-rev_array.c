#include "main.h"

/**
 * reverse_array - Reverses a string in array in place.
 * @a: Pointer to the string to be reversed.
 * @n: is the number of strings gets input
 * Description:
 * This function takes a pointer to a character array (string) and reverses
 * its content in place, modifying the original string.
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int temp;

	while (count < n)
	{
		temp = a[count];
		a[count] = a[n - 1];
		a[n - 1] = temp;
		count++;
		n--;
	}
}

