#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integer arguments and prints the result
 * @argc: Number of command-line arguments (including program name)
 * @argv: Array of command-line argument strings (expects two integers)
 *
 * Return: 0 on success, 1 on error
 *
 * Description: If exactly two integer arguments are provided, prints
 *              their product followed by a new line. If incorrect number
 *              of arguments is given, prints "Error" followed by new line
 *              and returns 1. Assumes valid integers that fit in standard
 *              integer type storage.
 */


int main(int argc, char *argv[])
{
	int mul_sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul_sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul_sum);

	return (0);
}
