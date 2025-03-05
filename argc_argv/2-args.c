#include <stdio.h>

/**
 * main - Prints all command-line arguments received by the program
 * @argc: Number of command-line arguments (including the program name)
 * @argv: Array of argument strings provided during execution
 *
 * Return: Always 0 (success)
 *
 * Description: Outputs each argument from the command line, starting with
 *              the program name (argv[0]), followed by subsequent arguments.
 *              Each argument is printed on its own line.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
