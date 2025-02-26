#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a character array (string) and
 * prints the second half of the string. If the number of characters
 * is odd, it prints the last n characters, where n is calculated as
 * (length_of_the_string + 1) / 2. The function then prints a newline
 * character after the string.
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;	
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
		start = (len + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
