size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *temp = h;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }
    return count;
}
