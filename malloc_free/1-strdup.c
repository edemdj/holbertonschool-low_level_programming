#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory,
 *@str:imput string
 * Return: if str = NULL or if insufficient memory was available return NULL
 * otherwise return new
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *new;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new = (char *) malloc(len + 1 * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
