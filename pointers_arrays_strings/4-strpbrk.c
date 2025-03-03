#include "main.h"


/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing bytes to search for.
 *
 * This function locates the first occurrence in the string @s of any of the
 * bytes in the string @accept. It returns a pointer to the byte in @s that
 * matches one of the bytes in @accept, or NULL if no such byte is found.
 *
 * Return: Pointer to the first matching byte in @s, or NULL if not found.
 */


char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
			{
				return (&s[count]);
			}
		}
		count++;
	}
	return (0);
}

