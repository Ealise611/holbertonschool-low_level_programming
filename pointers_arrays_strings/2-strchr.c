#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search.
 * @c: Character to locate.
 *
 * This function searches for the first occurrence of the character @c
 * in the string @s. The terminating null byte is considered part of the
 * string, so if @c is `\0`, the function returns a pointer to it.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}
