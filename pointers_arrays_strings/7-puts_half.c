#include "main.h"

/**
 * puts_half - Affiche la deuxi�aîne de caractères.
 * @str: La chaîne de caractères à traiter.
 *
 * aîne est paire, la fonction affiche la seconde moitié
 * ur est impaire, elle commence à afficher après le
 * premier caractère du milieu.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		if (len % 2 == 0)
		{
			i = len / 2;
		}
		else
		{
			i = (len / 2) + 1;
		}
	}
	else
	{
		i = (length - 1) / 2;
	}
	for (; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
