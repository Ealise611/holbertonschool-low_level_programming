#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of the bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at the given index (0 or 1),
 *         or -1 if an error occurred (e.g., index out of range).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int total_bits = sizeof(n) * 8;

	if (index >= total_bits)
		return (-1);
	print_binary(n);

	if ((n >> index & 1))
		return (1);
	else
		return (0);
}

