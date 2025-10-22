#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Affiche les chiffres de 0 à 9 */
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	/* Affiche les lettres de a à f */
	for (i = 0; i < 6; i++)
		putchar(i + 'a');

	putchar('\n');

	return (0);
}





