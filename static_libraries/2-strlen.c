#include <stdio.h>
/**
 * _strlen - unction that returns the length of a string.
 *@s: char type pointeur
 * Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
