#include "main.h"
/**
 * print_sign - Determines the sign of a number and prints it
 * @n: The number to check
 *
 * Description: This function checks whether a number is positive,
 * zero, or negative. It prints '+' if the number is greater than zero,
 * '0' if the number is zero, and '-' if the number is less than zero.
 *
 * Return: 1 if n is greater than zero,
 *         0 if n is zero,
 *        -1 if n is less than zero.
 */

int print_sign(int n)
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

