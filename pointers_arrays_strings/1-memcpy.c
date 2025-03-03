#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * This function copies @n bytes from the memory area @src to the memory
 * area @dest. It returns a pointer to the destination memory area @dest.
 *
 * Return: Pointer to the destination memory area @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n > 0 && *src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
		n--;
	}
	while (n > 0)
	{
		*temp = *src;
		src++;
		temp++;
		n--;
	}
	return (dest);
}

