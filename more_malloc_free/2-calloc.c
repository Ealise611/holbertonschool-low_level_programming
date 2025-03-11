#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Description:
 * This function allocates memory for an array containing `nmemb` elements,
 * where each element is `size` bytes long.The allocated memory is set to zero.
 *
 * If either `nmemb` or `size` is 0, the function returns NULL.
 * If `malloc` fails to allocate memory, the function also returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int total_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = size * nmemb;

	arr = malloc(total_size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

