#include "main.h"

/**
 * factorial(int n) - functions that calculate the factorial of n
 * @n: n times factorial
 *
 * Description: This function calcualte factorial of n
 *
 * Return: factorial result of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}	
