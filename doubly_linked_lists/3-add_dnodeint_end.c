#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: The integer value to be added to the new node
 *
 * Description: This function creates a new node and adds it to the
 * end of the doubly linked list. If the list is empty, it behaves
 * like `add_dnodeint` and places the node at the start.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new_node, *temp;

		/* Allocate memory for the new node */
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		/* Initialize the new node */
		new_node->n = n;
		new_node->next = NULL;

		/* If the list is empty, make the new node the head */
		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
			return (new_node);
		}

		/* Otherwise, find the last node and insert the new node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;

		return (new_node);  /* Return the address of the new node */
}
