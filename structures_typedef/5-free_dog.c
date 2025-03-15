#include <stdlib.h>
#include "dog.h"

/*
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog_t structure to be freed.
 *
 * Description:
 * - This function deallocates memory assigned to the dog structure.
 * - It first frees the memory allocated for the 'name' and 'owner' strings.
 * - Finally, it frees the memory allocated for the structure itself.
 * - If 'd' is NULL, the function does nothing to prevent errors.
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
