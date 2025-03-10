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
    char *duplicate;

    if (str == NULL)
    {
        return (NULL);
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        char *duplicate = malloc((i + 1) * sizeof(char));
        
        if (duplicate == NULL)
        {
            return (NULL);
        }
    }
    for (i = 0; i != '\0'; i++)
    {
        duplicate[i] = str[i];
    }
    return (duplicate);

 }
