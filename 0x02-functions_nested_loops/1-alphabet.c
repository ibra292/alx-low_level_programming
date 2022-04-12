#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
