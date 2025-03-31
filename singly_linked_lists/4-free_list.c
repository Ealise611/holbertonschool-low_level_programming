#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: Iterates through a linked list of type list_t
 * and frees each node's string and the node itself, ensuring
 * all allocated memory is properly deallocated.
 */

void free_list(list_t *head)
{
	/*declaring a temp pointer*/
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;/*save the reference to the next node*/
		free(head->str);/*free the string*/
		free(head);/*free the current node*/
		head = temp;/*move to the next node*/
	}
}
