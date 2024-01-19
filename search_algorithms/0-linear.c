#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: array to searches
 * @value: integer
 * @size: is the number of elements in array
 * Return: return - 1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (value == 0 || array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
