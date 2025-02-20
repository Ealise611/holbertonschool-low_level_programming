#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a')
	{
		if (c <= 'z')
		{
			return (1);
		}

	}
	return (0);
}


