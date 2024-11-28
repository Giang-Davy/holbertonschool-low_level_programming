#include "main.h"

/**
 * _strcpy - Copie le contenu de la chaîne src dans la chaîne dest
 * @dest: La chaîne de destination
 * @src: La chaîne source à copier
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';  /* Ajouter le caractère de fin de chaîne */
    return dest;
}
