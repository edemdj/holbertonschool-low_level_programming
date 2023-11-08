#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	unsigned int i, j, k, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s1[j] != '\0'; j++)
		;

	concat_str = malloc(sizeof(char) * (i + j + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concat_str[k] = s1[k];

	len = j;
	for (j = 0; j <= len; k++, j++)

		concat_str[k] = s2[j];

	return (concat_str);

}
