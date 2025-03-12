#include <stdio.h>
#include "dog.h"

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
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(new_dog));
	if (dog_t == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
