#include "main.h"

/**
 * puts2 - Imprimemmençant par le premier.
 * @str: La chaîne de caractères à traiter.
 *
 * Cette fonction pe chaque autre caractère,
 * en commençant par le premier.
 */
void puts2(char *str)
{
	int i = 0;
while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n'); /* Nouvelle ligne à la fin */
}
