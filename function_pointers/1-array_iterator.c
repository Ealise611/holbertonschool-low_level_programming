#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the integer array
 * @size: Number of elements in the array
 * @action: Function pointer to apply to each element
 *
 * Description: This function iterates through an array and applies
 * the function pointed to by `action` on each element. If `array`
 * or `action` is NULL, the function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
