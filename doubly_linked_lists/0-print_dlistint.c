#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes printed
 */
void print_dlistint(const dlistint_t *head)
{
    const dlistint_t *current = head;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
