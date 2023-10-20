#include "main.h"
/**
 * _print_sign - function that prints the sign of a number
 * @n: number
 * Return: 1 if n > 0;Return 0 if n == 0 else -1
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);

	}

	else
	{
		_putchar('-');

		return (-1);
	}
}
