#include "main.h"

/**
 * puts2 - prints every other character of a strong
 * starting with the 1st character
 * follow by a new line
 *
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != 0)
	{
		_putchar(str[count]);
		count = count + 2;
	}
	_putchar('\n');
}
