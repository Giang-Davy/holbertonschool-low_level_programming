#include "main.h"

/**
 * _strcpy - Copie le contenu de la cha�chaîne dest
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
	dest[i] = '\0';  /* Ajouter le caractèhaîne */
	return (dest);
}
