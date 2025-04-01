#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: Iterates through a linked list of type list_t
 * and frees each node's string and the node itself, ensuring
 * all allocated memory is properly deallocated.
 */

void free_dlistint(dlistint_t *head)
{
	/*declaring a temp pointer*/
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
