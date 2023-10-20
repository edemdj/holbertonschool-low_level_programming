#include "main.h"
/**
 *  int _islower(int c) - , function that checks for lowercase character.
 *
 * Always return (0);
 */
int _islower(int c)
{
	if (c >=97 && c <= 122)
		return(1);

	else return(0);
}
