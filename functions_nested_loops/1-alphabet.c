#include "main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line
 * Always return (0);
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}

	_putchar('\n');

}
