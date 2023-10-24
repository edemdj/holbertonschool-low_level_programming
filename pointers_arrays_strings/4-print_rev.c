#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *@s:string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)

	for (i = i - 1; s[i] != '\0' ; i--)
		{
			putchar(s[i]);

		}

	putchar ('\0');

}
