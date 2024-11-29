#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 * @head: Double pointer to the head of the list
 * @n: The value to store in the new node
 *
 * Return: 1 if successful, -1 if it failed
 */
int add_dnodeint_end(dlistint_t **head, int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *last = *head;

    if (!new_node)
        return (-1);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (1);
    }

    while (last->next)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
    return (1);
}
