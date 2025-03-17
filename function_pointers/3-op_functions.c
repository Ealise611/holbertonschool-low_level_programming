#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts the second integer from the first
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the first integer by the second
 * @a: The dividend (first integer)
 * @b: The divisor (second integer)
 *
 * Return: The result of a / b.
 *         If b is 0, behavior is undefined (e.g., division by zero).
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of dividing the first integer by the second
 * @a: The dividend (first integer)
 * @b: The divisor (second integer)
 *
 * Return: The remainder when a is divided by b.
 *         If b is 0, behavior is undefined (e.g., division by zero).
 */

int op_mod(int a, int b)
{
	return (a % b);
}
