#include "main.h"

/**
 * print_line - dessine une ligne droite dans le terminal
 * @n: nombre de fois que le caractère _ doit être imprimé
 *
 * Return: rien
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
}

