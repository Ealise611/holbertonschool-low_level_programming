#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y.
 *         If y is lower than 0, returns -1 to indicate an error.
 *         If y is 0, returns 1 (base case).
 *         Otherwise, recursively multiplies x by itself y times.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
