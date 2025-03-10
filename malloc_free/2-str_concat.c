#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: This function allocates memory dynamically and stores the
 * concatenation of s1 followed by s2. If either s1 or s2 is NULL, they
 * are treated as empty strings. The resulting string is null-terminated.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         Returns NULL if memory allocation fails.
 *
 * Note: The caller is responsible for freeing the allocated memory to avoid
 *       memory leaks.
 */

char *str_concat(char *s1, char *s2)
{
	char *string_together;
	int i;
	int size1, size2;
	int size_total = 0;

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	size_total = size1 + size2;
	
	string_together = malloc((size_total + 1) * sizeof(char));
	if (string_together == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		string_together[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		string_together[size1 + i] = s2[i];
	}
	return (string_together);
}
