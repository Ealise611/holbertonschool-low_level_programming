#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The integer value to store in the new node.
 *
 * Description: This function adds the all the value in the list.
 * if the list is empty, return 0.
 *
 * Return: The sum or 0 if it's empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

