#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n), or 0 if the list is empty
 *
 * Description: This function iterates over the linked list and adds the value
 * of each node's data (n) to a runnf the list is empty, it returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
		int sum = 0;
		dlistint_t *current = head;

		/* Traverse the list and accumulate the sum of the data */
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}

		/* Return the sum */
		return (sum);
}
