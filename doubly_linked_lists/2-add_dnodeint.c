#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	/*if the list is not empty, set previous pointer of the old head*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}

