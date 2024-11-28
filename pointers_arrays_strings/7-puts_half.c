#include "main.h"

/* Fonction qui affiche la deuxième moitié d'une chaîne */
void puts_half(char *str)
{
    int len = 0;
    int i;

    /* Calcul de la longueur de la chaîne */
    while (str[len] != '\0')
        len++;

    /* Déterminer où commencer l'affichage de la deuxième moitié */
    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len / 2) + 1;

    /* Afficher la deuxième moitié de la chaîne */
    for (; str[i] != '\0'; i++)
        _putchar(str[i]);

    _putchar('\n');
}
