#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function iterates through the entire doubly linked list
 * and counts the number of nodes.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
		size_t count = 0;

		while (h != NULL)
		{
			count++;      /* Increment the node count */
			h = h->next;  /* Move to the next node */
		}
		return (count);  /* Return the total number of nodes */
}

