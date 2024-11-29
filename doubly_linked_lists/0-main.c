#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;
    int r;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;

    // Printing the list before deletion
    print_dlistint(head);
    printf("-> %lu elements\n", n);

    // Deleting the node at index 0
    r = delete_dnodeint_at_index(&head, 0);
    if (r == -1)
        printf("Failed to delete node at index 0\n");
    else
        print_dlistint(head);  // Print the list after deletion

    free(new);
    return (EXIT_SUCCESS);
}
