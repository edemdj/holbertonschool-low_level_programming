#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a
 *  sorted array of integers
 * @array: array to searches
 * @value: integer
 * @size: is the number of elements in array
 * Return: return - 1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (value == 0 || array == NULL)
		return (-1);


	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		mid = (right + left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
	}
	return (-1);
}
