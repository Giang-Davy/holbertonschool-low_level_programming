#include <stdio.h>

/**
 * reset_to_98 - Met à jour la valeur pointée par n à 98.
 * @n: Un pointeur vers un entier.
 *
 * Cette fonction prend un pointeur vers un entier et modifie la valeur
 * de l'entier pointé pour la rendre égale à 98.
 */
void reset_to_98(int *n)
{
    *n = 98;
}

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
