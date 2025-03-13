#include <stdio.h>
#include "dog.h"

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

	while (n > 0 && *src != '\0')
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
return (dest);
}


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
/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the string containing the dog's name
 * @age: Age of the dog in years
 * @owner: Pointer to the string containing the owner's name
 *
 * Description: This function dynamically allocates memory for a new
 * dog structure and stores a copy of the name and owner strings.
 * If memory allocation fails at any point, the function returns NULL.
 * The caller is responsible for freeing the allocated memory.
 *
 * Return: Pointer to the newly created dog_t structure, or NULL if
 * memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *s;
	dog_t *dog;/*declare the structure pointer to dog_t*/

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	if (dog == NULL)
	{
		return (NULL);
		
	}
	s = _strlen(len);

	dog = malloc(sizeof(dog_t));
	if (dog_t == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

