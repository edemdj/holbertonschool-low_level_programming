#include <stdio.h>
#include <string.h>
/**
 *rev_string - function that reverses a string.
 *@s:strind that print
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);

	}

	putchar('\n');

}
