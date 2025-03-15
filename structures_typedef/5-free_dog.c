#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure and its members
 * @d: Pointer to the dog structure whose memory is to be freed
 *
 * Description: This function frees the memory allocated for the name and owner
 * fields of a dog structure. It also frees the structure itself. It checks
 * if the fields and the structure are not NULL before freeing them to avoid
 * undefined behavior.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);
	free(d);
}
