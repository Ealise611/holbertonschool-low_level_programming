#include "main.h"

/**
 * _strcpy - Copies a string from source to destination, including the
 *           terminating null byte.
 * @dest: Pointer to the destination buffer where the content is to be copied.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to the destination string @dest.
 *
 * Description:
 * This function copies the string pointed to by @src, including the
 * terminating null byte ('\0'), to the buffer pointed to by @dest.
 * The destination buffer must be large enough to hold the copied string.
 * The function returns a pointer to @dest.
 */


char *_strcpy(char *dest, char *src)
{

	char *update_dest = dest;/*Save the update_dest address of dest*/

	while (*src != '\0')/*loop until the end of the source string*/
	{
		*dest = *src;/*copy source to dest*/
		dest++;/*move to the next position in dest*/
		src++;/*move to the next position in source*/
	}
	*dest = '\0';/* add null to the end of the dest*/
	return (update_dest);/*return the updated dest addres of dest*/
}
