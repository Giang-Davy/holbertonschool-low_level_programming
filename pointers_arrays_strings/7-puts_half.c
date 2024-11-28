#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne.
 * @str: La chaîne de caractères à traiter.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len / 2) + 1;
	}
	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
