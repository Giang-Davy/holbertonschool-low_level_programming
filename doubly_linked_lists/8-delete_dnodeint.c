#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* If the node to delete is the head */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at the given index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If the node doesn't exist at the given index */
	if (current == NULL)
		return (-1);

	/* Remove the node */
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);

	return (1);
}
