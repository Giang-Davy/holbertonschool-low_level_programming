#include "main.h"
/**
 * _atoi - Convertit une chaîne en entier.
 * @s: La chaîne à convertir.
 *
 * Ignore les espaces etchiffres en entier.
 * Retourne 0 si aucun nombre n'est trouvé.
 *
 * Return: L'entier converti ou 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			return ((sign == 1) ? 2147483647 : -2147483648);
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
