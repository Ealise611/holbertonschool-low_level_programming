#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at the nth position of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The nth node.
 *
 * Description: This function traverses a doubly linked list to
 * find and return the node locateded at the given index.
 * if the node does not exisit, return NULL
 * Index starts from 0, if the node does not existi return NULL.
 *
 * Return: The nth node of a dlistint_t list, or NULL if not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (current_index == index)
			return (temp);
		
		else
		{
			temp = temp->next;
			current_index++;
		}
	}
	return (NULL);
}
