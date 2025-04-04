#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear the value of a bit at a given index.
 * @n: A pointer to the number where the bit needs to be set.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred.
 *         (e.g., if the index is out of range for the unsigned long int).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = sizeof(n) * 8;

	if (index >= total_bits)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
