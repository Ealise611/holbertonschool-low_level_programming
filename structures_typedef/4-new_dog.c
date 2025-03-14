#include <stdio.h>
#include <stdlib.h>
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
	int i = 0, len_name = 0, len_owner = 0;
	dog_t *dog;/*declare the structure pointer to dog_t*/

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	while (name[len_name] != '\0')
		len_name++;/*find the length for name*/
	while (owner[len_owner] != '\0')
		len_owner++;/*find the length for owner*/

	dog = malloc(sizeof(dog_t));/*allocate memory for structure*/
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len_name + 1)); /*allocate memory for name*/
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_owner + 1)); /*allocate memory for owner*/
	if (dog->owner == NULL)	
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (i < len_name)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[len_name] = '\0';

	while (i < len_owner)
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[len_owner] = '\0';
	
	dog->age = age;
	return (dog);
}

