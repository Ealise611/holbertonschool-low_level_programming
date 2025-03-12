#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog in years
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This function initializes a struct dog variable
 * with the provided name, age, and owner values. If d is NULL,
 * the function does nothing to prevent segmentation faults.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
