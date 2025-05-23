#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The integer value to store in the new node.
 *
 * Description: This function creates a new node with the given integer
 * value and inserts it at the beginning of a doubly linked list. It updates
 * the head pointer to point to the new node. If memory allocation fails,
 * the function returns NULL.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	/*if the list is empty, the new nodes becomes head*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
