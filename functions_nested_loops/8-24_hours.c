#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *@i;@j: number
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(58);
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}

}
