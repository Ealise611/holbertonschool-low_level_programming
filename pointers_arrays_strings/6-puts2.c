#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a character array (string) and
 * prints every other character, starting with the first one,
 * followed by a newline character.
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
