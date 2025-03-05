#include <stdio.h>

/**
 * main - Prints the name of the program as invoked, including path.
 * @argc: Number of command-line arguments (unused)
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (success)
 *
 * Description: Outputs the first command-line argument (argv[0]),
 *              which contains the program name as it was invoked,
 *              including any preceding path components. The program
 *              will automatically reflect any renaming of the
 *              compiled binary without requiring recompilation.
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
