#include "main.h"

/**
 * _strlen_recursion - functions that prints the length of a string
 * @s: pointer to char that needs be calculated for the length
 *
 * Description: This function find the number of length of the string
 *
 * Return: count of length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
