#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * This function finds the first occurrence of the substring @needle in the
 * string @haystack. The terminating null bytes ('\0') are not compared.
 * If @needle is an empty string, the function returns @haystack.
 *
 * Return: Pointer to the start of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;/*temp for haystack*/
		char *n = needle;/*temp for needle*/

		while (*n != '\0' && *h == *n)/*when found match*/
		{
			n++;
			h++;
		}
		if (*n == '\0')/*match done*/
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}


