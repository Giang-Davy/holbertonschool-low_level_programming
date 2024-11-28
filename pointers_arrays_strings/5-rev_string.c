#include "main.h"

/* Fonction qui inverse une chaîne de caractères */
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
