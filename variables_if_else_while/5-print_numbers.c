#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	char numbers;

	for ( numbers = '0'; numbers <= '9'; numbers++)
		putchar (numbers);

	putchar ('\n');

		return (0);

}
