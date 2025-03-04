#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: This function calculates the natural square root of `n`
 * using recursion. If `n` does not have a natural square root, returns -1.
 *
 * Return: The natural square root of `n`
 * or -1 if `n` has no natural square root.
 */

int _helper(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, root + 1));
	}
}



int _sqrt_recursion(int n)
{	
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, 0));
	}
}
