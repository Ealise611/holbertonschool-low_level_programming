#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to store in the new node (to be duplicated)
 *
 * Description: This function creates a new node, duplicates
 * the given string using strdup, and inserts the node at the
 * beginning of the linked list. If memory allocation fails,
 * it returns NULL.
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
                return (NULL);

        new_node->str = strdup(str);
        if (new_node->str == NULL)
	{
		free(new_node);
		return(NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return(new_node);
}


