#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node, starting from 0
 *
 * Return: The nth node, or NULL if the node does not exist
 *
 * Description: This function traverses the linked list to find the node at
 * the specified index. If the index is out of bounds, it returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		unsigned int i = 0;
		dlistint_t *current = head;

		/* Traverse the list until we reach the specified index */
		while (current != NULL)
		{
			/* If the current node is the nth node, return it */
			if (i == index)
			{
				return (current);
			}
			current = current->next;
			i++;
		}

		/* If we reach the end of the list without finding the index, return NULL */
		return (NULL);
}
