#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[len] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
