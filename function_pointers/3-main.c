#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: always 0
 *
 * Description:
 * - This function serves as the main entry point for the program.
 * - It expects three arguments from the command line:
 *     1. An integer (first operand)
 *     2. An operator (+, -, *, /, %)
 *     3. An integer (second operand)
 * - The program selects the correct func to perform the requested operation
 *   using `get_op_func()`, which returns a ptr to the right function.
 * - The operands are converted from strings to integers using `atoi()`.
 * - The result of the operation is printed to standard output.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);/*Declare function pointer*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);/*converts input to integer*/
	operator = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (operator == op_div || operator == op_mod))
	{
		printf("Error\n");
		exit(100);
	}

	result = operator(num1, num2);
	printf("%d\n", result);
	return (0);
}



