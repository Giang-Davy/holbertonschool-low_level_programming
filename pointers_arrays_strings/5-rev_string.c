#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: La chaîne de caractères à inverser.
 *
 * Cette fonction prend une chaîne de caractères et l'inverse en modifiant
 * l'ordre des caractères dans la chaîne.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;
		/* Trouver la longueur de la chaîne */
	while (s[end] != '\0')
	{
		end++;
	}
	end--; /* Ajuster l'indice pour le dernier caractère */
		/* Inverser la chaîne */
	while (start < end)
	{
	/* Échanger les caractères */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
