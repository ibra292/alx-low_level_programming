#include "main.h"
#include "alx.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */
int void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
