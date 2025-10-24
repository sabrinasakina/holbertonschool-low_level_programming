#include "main.h"

/**
 * main - affiche "_putchar" suivi d'un saut de ligne
 *
 * Return: toujours 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
