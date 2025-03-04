#include "main.h"

/**
 * _is_prime_helper - Recursively checks if a number is prime.
 * @n: The number to check for primality.
 * @i: The current divisor being tested (starting from 2).
 *
 * Description: This function checks whether `n` is divisible by `i`.
 * If `n` is divisible by `i`, it returns 0 (not prime).
 * If `i * i` exceeds `n`, it returns 1 (prime).
 * Otherwise, it recursively calls itself with `i + 1` to continue checking.
 *
 * Return: 1 if `n` is prime, 0 otherwise.
 */

int _is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_helper(n, (i + 1)));
	}
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Description: This function determines whether `n` is a prime number.
 * If `n` is less than 2, it returns 0 (not prime).
 * Otherwise, it calls a helper function `_is_prime_helper(n, 2)`,
 * which checks divisibility recursively.
 *
 * Return: 1 if `n` is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (_is_prime_helper(n, 2));
	}
}

