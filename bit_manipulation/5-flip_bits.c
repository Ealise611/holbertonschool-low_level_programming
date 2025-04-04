#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip to convert `n` to `m`.
 *         This is calculated by comparing the bits of `n` and `m`.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff;
	for (diff = n ^ m; diff != 0; diff = diff >> 1)
		count += diff & 1;
	return (count);
}
