#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * This function fills the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b. It returns a pointer to the
 * memory area @s.
 *
 * Return: Pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
	{
		*temp = b;
		temp++;
	}
	return (s);
}
