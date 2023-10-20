#include "main.h"
/**
 * print_alphabet_x10 - void print_alphabet_x10, in lowercase, followed by a new line
 *
 * Always return (0);
 */
void print_alphabet_x10(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z'; letter++)

	{
		_putchar((letter) *10));
	}
	_putchar('\n');
}
