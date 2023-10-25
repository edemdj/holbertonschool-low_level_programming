#include <stdio.h>
/**
 * void puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str:string that print the chars from
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		putchar(str[i]);

	putchar('\n');

}
