#include "0-putchar.c"

/**
 * main - prints putchar
 *
 * Description: prints putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
