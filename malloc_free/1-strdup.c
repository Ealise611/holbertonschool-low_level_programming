#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of the input string in a new memory space.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the newly allocated duplicated string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 *
 * Note: The returned pointer must be freed by the caller to avoid memory leaks.
 */

 char *_strdup(char *str)
 {
    int i;
    int len;
    char *duplicate;

    if (str == NULL)
    {
        return (NULL);
    }

    for (len = 0; str[len] != '\0'; len++)
    {
        duplicate = malloc((len + 1) * sizeof(char));
    }
    for (i = 0; i <= len; i++)
    {
        duplicate[i] = str[i];
    }
    return (duplicate);

 }
