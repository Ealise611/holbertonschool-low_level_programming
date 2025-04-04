#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing '0' and '1' characters.
 *
 * Description: This function takes a string representing a binary number
 *              and converts it to its equivalent unsigned integer value.
 *              It iterates through the string, validating each character
 *              to ensure it is either '0' or '1'. If the string contains
 *              any invalid characters or if the pointer is NULL, the
 *              function returns 0.
 *
 * Return: The converted unsigned integer, or 0 if:
 *         - There is one or more chars in the string b that is not '0' or '1'.
 *         - b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, len = 0;
	unsigned int total = 0, decval = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[len] != '\0'; i++)
		len++;

	for (j = (len -1); j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
