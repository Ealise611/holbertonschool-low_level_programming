#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description:
 * - This function takes two integer pointers as parameters.
 * - It swaps the values stored at the memory locations they point to.
 */

void swap_int(int *a, int *b)
{
	int og = *a;
	*a = *b;
	*b = og;
}
