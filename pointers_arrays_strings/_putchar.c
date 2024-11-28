#include <unistd.h>

/* Implémentation de la fonction _putchar */
int _putchar(char c)
{
    return write(1, &c, 1);  /* Utilise la fonction write pour afficher un caractère */
}
