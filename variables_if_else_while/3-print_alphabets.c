#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Imprimer les lettres minuscules */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* Imprimer les lettres majuscules */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	/* Nouvelle ligne */
	putchar('\n');

	return (0);
}
