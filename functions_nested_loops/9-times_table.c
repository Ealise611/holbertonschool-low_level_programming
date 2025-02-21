#include "main.h"


/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * Description: This function prints the multiplication table for the
 *              number 9, starting with 0 up to 9. Each row of the table
 *              displays the multiplier and the product in a formatted
 *              manner.
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c >= 10)
			{
				_putchar((c / 10) + '0');/*prints the ten digit*/
			}
			else
			{
				_putchar(' ');
				_putchar(' ');/*print spaces for single-digit alignment*/
			}
			_putchar((c % 10) + '0');/*print the units digit*/

			if (b < 9)
			{
				_putchar(',');

			}
		}
		_putchar('\n');
	}
}
