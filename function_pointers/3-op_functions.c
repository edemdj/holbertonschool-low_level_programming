#include "3-calc.h"
/**
 * op_add - returns the sum of 2 integers
 *@a: first integer
 *@b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference betwen 2 integers
 *@a: first integer
 *@b: second integer
 * Return: difference between soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product between 2 integers
 *@a: first integers
 *@b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of 2 integers
 *@a: first integer
 *@b: second integer
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
