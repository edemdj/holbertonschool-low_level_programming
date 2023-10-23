#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 *@a:int
 *@b:int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *b;
	*b = *a;
	*a = temporaire;

}
