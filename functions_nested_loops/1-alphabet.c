#include "main.h"

/**
 * print_alphabet - affiche l'alphabet en minuscules suivi d'un saut de ligne
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
