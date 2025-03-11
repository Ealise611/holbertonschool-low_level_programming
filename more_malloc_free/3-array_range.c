#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: The smallest integer in the array.
 * @max: The largest integer in the array.
 *
 * Description: This function dynamically allocates memory for an array
 * containing all integers from min to max, inclusive, in ascending order.
 * If min is greater than max, the function returns NULL.
 * If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly allocated array, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = max + min + 1, j;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(i * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = min + j;
	}
	return (arr);
}
