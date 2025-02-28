#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
	int count = 0;
	int capitalise = 1;/*check if needs capitalise*/

	while (s[count] != '\0')
	{
		if (s[count] == ' '|| s[count] == '\n'|| s[count] == '\t'
		|| s[count] == ',' || s[count] == '!' || s[count] == '?'
		|| s[count] == '"' || s[count] == '(' || s[count] == ')'
		|| s[count] == '{' || s[count] == '}' || s[count] == '.')
		{
			capitalise = 1;
		}
		else
		{
			if (capitalise == 1 && s[count] >= 'a' && s[count] <= 'z')
			{
				s[count] = s[count] - 32;
				capitalise = 0;
			}
			else
			{
				capitalise = 0;
			}
		}
		count++;
	}
	return (s);
}
