#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: This function uses nested loops to iterate through
 *              each hour and minute of a 24-hour period, starting
 *              from 00:00 (midnight) to 23:59 (one minute before
 *              the next midnight). For each minute, it prints the
 *              current time in the format HH:MM, followed by a
 *              newline character. The function does not take any
 *              parameters and does not return a value.
 */

void jack_bauer(void)

{
	int h1, m1;

	for (h1 = 0; h1 <= 23; h1++)
	{
		for (m1 = 0; m1 <= 59; m1++)
		{
			_putchar((h1 / 10) + '0');
			_putchar((h1 % 10) + '0');
			_putchar(':');
			_putchar((m1 / 10) + '0');
			_putchar((m1 % 10) + '0');
			_putchar('\n');
		}
	}
}
