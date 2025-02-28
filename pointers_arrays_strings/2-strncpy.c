#include "main.h"

/**
 * _strncpy - Copies a string up to a specified number of bytes.
 * @dest: Pointer to the destination buffer where the content is to be copied.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to be copied from @src.
 *
 * Description: This function copies up to @n bytes from the string pointed to
 * by @src to the buffer pointed to by @dest. If length of @src is less than
 * @n, the remainder of @dest will be padded with null bytes ('\0'). If @src
 * contains @n or more bytes, it does not need to be null-terminated, and @dest
 * will not be null-terminated if there's no null byte among the 1st @n bytes
 * of @src. The behavior is undefined if the memory areas of @dest and @src
 * overlap.
 *
 * Return: Pointer to the destination string @dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *update_dest = dest;

	while (*update_dest != '\0')
	{
		update_dest++;

	}
	while (n >= 0 && *src != '\0')
	{
		*update_dest = *src;
		src++;
		update_dest++;
		n--;
	}
	while (n > 0)
	{
		*update_dest = '\0';
		src++;
		update_dest++;
		n--;
	}
*update_dest = '\0';
return (dest);
}
