#include "main.h"

/**
 * puts2 - prints every other character of a strong
 * starting 
 * @str: pointer to the input string
 * Description: prints every other character of a strong
 * starting with the 1st character
 * follow by a new line
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
