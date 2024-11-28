#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier
 * @s: La chaîne à convertir
 *
 * Return: L'entier converti
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
		}
		else
		{
			break;
		}
	}
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
