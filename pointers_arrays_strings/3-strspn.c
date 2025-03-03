#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string to be scanned.
 * @accept: The set of characters to match in the prefix substring.
 *
 * Description: This function calculates the number of bytes in the initial
 * segment of `s` that consist only of characters found in `accept`.
 * It stops counting when a character in `s` is found that is not in `accept`.
 *
 * Return: The number of bytes in the initial segment of `s`
 * that consist only of characters from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int match;

	while (*s != '\0')
	{
		match = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				count++;
				break;
			}
		}
		if (match == 0)
		{
			return (count);
		}

		s++;
	}
	return (count);
}
