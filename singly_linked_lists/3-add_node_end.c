#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*prototype*/
int _strlen(const char *s);


/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to store in the new node (to be duplicated)
 *
 * Description: This function creates a new node, duplicates
 * the given string using strdup, and inserts the node at the
 * end of the linked list. If memory allocation fails,
 * it returns NULL.
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
