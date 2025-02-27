#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string buffer.
 * @src: Pointer to the source string to be appended.
 *
 * Description: This function appends the source string pointed to by @src to
 * the end of the destination string pointed to by @dest. The terminating null
 * byte ('\0') at the end of @dest is overwritten by the first character of
 * @src, and a new null byte is added at the end of the concatenated string.
 * The destination string must have enough space to accommodate the resulting
 * concatenated string, including the additional null byte. If the destination
 * buffer is not large enough, the behavior is undefined.
 *
 * Return: Pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *update_dest = dest;

	while (*update_dest != '\0')
	{
		update_dest++;

	}
	while (*src != '\0')
	{
		*update_dest = *src;
		*src++;
		*update_dest++;
	}
*update_dest = '\0';
return (dest);
}
