#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be represented in binary.
 *
 * Description: This function outputs the binary representation of the given
 *              unsigned long integer 'n'. It does so without utilizing arrays,
 *              dynamic memory allocation (malloc), the modulus (%) or division
 *              (/) operators. The function handles edge cases, such as when 'n'
 *              is 0, by printing '0'. For all other values, it determines the
 *              highest bit set and iterates through each bit position, printing
 *              '1' or '0' accordingly.
 *
 * Constraints:
 *      - Arrays are not used.
 *      - Dynamic memory allocation is not performed.
 *      - The modulus (%) and division (/) operators are not used.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0);
	}

	int total_bits = sizeof(n) * 8;
	int index = total_bits - 1;
	int started = 0;/*flag to print or not*/

	while (index >= 0)
	{
		if ((n >> index) & 1)
		{
			_putchar('1');
			started = 1;
		}
		
		else if (started)
			_putchar('0');
		index--;

	}
}
