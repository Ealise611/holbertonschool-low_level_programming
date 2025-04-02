#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at the index of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @idx: the index position to be inserted 
 * @n: The integer value to store in the new node.
 *
 * Description: This function insert a new node with given n at idx.
 * idx starts at 0.
 *
 * Return: The address of the new element at index, or NULL if it cannot.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;
	

	if (idx == 0)
	{
		return add_dnodeint(h, n);
	}
	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (0);
		i++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
		

	


