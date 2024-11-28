#include <unistd.h>

/* Fonction pour afficher un caractère */
int _putchar(char c)
{
    return write(1, &c, 1);
}
