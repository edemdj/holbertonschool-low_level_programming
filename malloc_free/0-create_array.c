#include <stdio.h>
#include <stdlib.h>
/**
* *create_array function that creates an array of chars
* and initializes it with a specific char
*@c:input string
*@size:input size
*/
char *create_array(unsigned int size, char c)
{

	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
