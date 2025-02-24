#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(((b - (b % 10)) / 10) + '0');
			}
			_putchar((b % 10) + '0');

		}


		_putchar('\n');
	}
}
