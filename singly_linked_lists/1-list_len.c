
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Prints number of elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Description: Iterates through a linked list of type list_t
 * and return number of elements
 *
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			return (1);
		else
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
