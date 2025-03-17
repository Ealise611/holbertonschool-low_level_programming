#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: Function pointer to the comparison function.
 *
 * Description:
 * This function iterates through the array and applies the function `cmp`
 * to each element. The function `cmp` is expected to return 0 if the element
 * does not match the desired condition, and a non-zero value if it does.
 *
 * Return:
 * - The index of the first element for which `cmp` does not return 0.
 * - If no element matches, or if `size` is less than or equal to 0, return -1.
 * - If `array` or `cmp` is NULL, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	/*iterate through array*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)/*if cmp return non zero (match found)*/
			return (i);
	}
	/*if no match found return -1*/
	return (-1);
}
