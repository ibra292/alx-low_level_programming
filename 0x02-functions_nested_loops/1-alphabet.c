#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(const char letter)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
