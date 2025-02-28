#include "main.h"

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 * - 0 if the strings are identical.
 * - A negative value if s1 is less than s2.
 * - A positive value if s1 is greater than s2.
 *
 * Description:
 * This function compares characters of s1 and s2 one by one. If a mismatch
 * occurs, it returns the difference between the ASCII values of the mismatched
 * characters.
 * If all characters match until the end of both strings, it returns 0.
 * If one string is shorter, the comparison stops at the null terminator ('\0'),
 * and the difference is calculated against the
 * remaining character in the longer string.
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int result = 0;

	while (s1[count] == s2[count] && s1[count] && s2[count])
	{
		count++;
	}
	result = s1[count] - s2[count];
	return (result);
}


