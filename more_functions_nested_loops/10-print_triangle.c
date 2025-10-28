#include "main.h"

/**
 * print_triangle - affiche un triangle rectangle de #
 * @size: taille du triangle
 *
 * Return: rien
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            _putchar(' ');
        }
        for (j = 0; j < i; j++)
        {

