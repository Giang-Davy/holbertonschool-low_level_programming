#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees all the nodes of the doubly linked
 * list, starting from the head. It also ensures that all dynamically
 * allocated memory for the nodes is properly freed.
 */
void free_dlistint(dlistint_t *head)
{
		dlistint_t *temp;

		/* Traverse the list and free each node */
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);  /* Free the current node */
		}
}
