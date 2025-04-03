#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - insert a new node at the
 * index of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: the index position to be deleted
 *
 * Description: This function deletes a node with given n at idx.
 * idx starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int counter = 0;

	/*if the list is empty*/
	if (*head == NULL)
		return (-1);
	/*if the index is 0*/
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (temp != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}	
