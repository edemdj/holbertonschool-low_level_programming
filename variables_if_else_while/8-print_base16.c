#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;
	char letter;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar ('\n');

	return (0);
}
