#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: The integer value to be added to the new node
 *
 * Description: This function creates a new node and adds it to the
 * beginning of the doubly linked list. It updates the head pointer
 * to point to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
		dlistint_t *new_node;

		/* Allocate memory for the new node */
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		/* Initialize the new node */
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;

		/* If the list is not empty, update the previous head node */
		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		/* Update the head pointer to the new node */
		*head = new_node;

		return (new_node);  /* Return the address of the new node */
}
