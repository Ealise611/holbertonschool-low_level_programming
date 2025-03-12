#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any element of the struct is NULL, it prints (nil) instead.
 * If d is NULL, the function prints nothing.
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->name == NULL)
	{
	printf("Owner: (nil)");
	}
	else
	printf("Owner: %s\n", d->owner);
}
