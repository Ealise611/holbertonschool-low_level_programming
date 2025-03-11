#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Description: This function allocates memory dynamically using malloc.
 * If malloc fails, the function terminates the program with an exit
 * status of 98.
 *
 * Return: A pointer to the allocated memory.
 *
 * Note: The caller is responsible for using and freeing the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
