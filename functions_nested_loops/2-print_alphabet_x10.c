#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - void print_alphabet_x10, in lowercase,
 * followed by a new line
 *
 * Always return (0);
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{

		for (letter = 'a'; letter <= 'z'; letter++)

		{
		_putchar(letter);
		}
		_putchar('\n');
	}
}
