#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @s: Pointer to the input string.
 *
 * Description: This function iterates through each character of the input
 * string pointed to by @s. For every lowercase letter encountered, it
 * converts it to the corresponding uppercase letter by adjusting its ASCII
 * value. The function modifies the original string and returns a pointer
 * to it. Non-alphabetic characters remain unchanged.
 *
 * Return: Pointer to the modified string @str.
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		while (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
		count++;
	}
	return (s);
}
