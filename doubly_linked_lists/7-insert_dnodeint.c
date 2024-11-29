#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: The value to store in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *create_node(int n);
dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node);
dlistint_t *insert_at_position(dlistint_t **h, unsigned int idx,
                dlistint_t *new_node);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;

    /* Create a new node */
    new_node = create_node(n);
    if (new_node == NULL)
    {
        return (NULL);
    }
    /* Special case: insert at the beginning */
    if (idx == 0)
    {
        return (insert_at_beginning(h, new_node));
    }
    /* Traverse the list to find the position */
    return (insert_at_position(h, idx, new_node));
}

/**
 * create_node - Creates a new node with the given value
 * @n: The value to store in the new node
 *
 * Return: The newly created node, or NULL if it fails
 */
dlistint_t *create_node(int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;
    return (new_node);
}

/**
 * insert_at_beginning - Inserts a new node at the beginning of the list
 * @h: Pointer to the head of the list
 * @new_node: The new node to insert
 *
 * Return: The address of the new node
 */
dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
    new_node->next = *h;
    if (*h != NULL)
    {
        (*h)->prev = new_node;
    }
    *h = new_node;
    return (new_node);
}

/**
 * insert_at_position - Inserts a new node at a specific position in the list
 * @h: Pointer to the head of the list
 * @idx: The index to insert the node at
 * @new_node: The new node to insert
 *
 * Return: The address of the new node, or NULL if the position is invalid
 */
dlistint_t *insert_at_position(dlistint_t **h, unsigned int idx,
                dlistint_t *new_node)
{
    dlistint_t *current = *h;
    unsigned int i;

    /* Traverse to the node before the desired index */
    for (i = 0; current != NULL && i < idx - 1; i++)
    {
        current = current->next;
    }
    /* If current is NULL, the index is out of range */
    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node at the specified position */
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = new_node;
    }
    current->next = new_node;

    return (new_node);
}
