#include "main.h"
#include <stdio.h>

/**
 * print_array - Affiche les n premiers éléments d'un tableau d'entiers.
 * @a: Le tableau d'entiers à afficher.
 * @n: Le nombre d'éléments à afficher.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
