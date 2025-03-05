#include <stdio.h>

/**
 * main - Prints the count of command-line arguments passed to the program
 * @argc: Number of command-line arguments (including program name)
 * @argv: Array of command-line argument strings (unused)
 *
 * Return: Always 0 (success)
 *
 * Description: Outputs the number of arguments provided at execution,
 *              excluding the program name itself. For example, if
 *              run as "./program arg1 arg2", prints "2".
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
