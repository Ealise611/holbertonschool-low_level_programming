#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Description:
 * This function allocates memory to store a new string, which consists of:
 * - s1, followed by
 * - the first n bytes of s2.
 * The result is null-terminated.
 *
 * If the function fails (e.g., memory allocation fails), it returns NULL.
 * If n is greater than or equal to the length of s2,
 * the entire string s2 is used.
 * If either string (s1 or s2) is NULL, it is treated as an empty string.
 *
 * Return: A pointer to the newly allocated memory containing
 * the concatenated string, or NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_together;
	int i;
	int size1 = 0, size2 = 0;
	int size_total = 0;
	int j = (int)n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (j >= (size2))
		j = size2;
	size_total = size1 + j;

	string_together = malloc((size_total + 1) * sizeof(char));
	if (string_together == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		string_together[i] = s1[i];
	for (i = 0; i < j; i++)
		string_together[size1 + i] = s2[i];
	string_together[size_total] = '\0';

	return (string_together);
}
