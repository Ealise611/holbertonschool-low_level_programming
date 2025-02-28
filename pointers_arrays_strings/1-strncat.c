#include "main.h"

/**
 * _strncat - Concatenates two strings up to a specified number of bytes.
 * @dest: Pointer to the destination string buffer.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to be appended from @src.
 *
 * Description: This function appends at most @n bytes from the source
 * string pointed to by @src to the end of the destination string pointed
 * to by @dest. The terminating null byte ('\0') at the end of @dest is
 * overwritten by the first character of @src, and a new null byte is added
 * at the end of the concatenated string. If @src contains @n or more bytes,
 * it does not need to be null-terminated. The destination string must have
 * enough space to accommodate the resulting concatenated string, including
 * the additional null byte. If the destination buffer is not large enough,
 * the behavior is undefined.
 *
 * Return: Pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *update_dest = dest;

	while (*update_dest != '\0')
	{
		update_dest++;

	}
	while (n > 0 && *src != '\0')
	{
		*update_dest = *src;
		src++;
		update_dest++;
		n--;
	}
*update_dest = '\0';
return (dest);
}
