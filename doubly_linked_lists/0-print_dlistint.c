#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    size_t count = 0;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        count++;
    }
    return (count);
}
