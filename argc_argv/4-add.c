#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_digit - Checks if a string represents a positive integer
 * @s: String to validate
 *
 *Description: function to check is string is digit and positive
 *
 * Return: 1 if valid, 0 if invalid
 */

int is_positive_digit(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}




/**
 * main - Sums positive integer arguments passed via command line
 * @argc: Number of command-line arguments (including program name)
 * @argv: Array of argument strings to be validated and summed
 *
 * Return: 0 on valid input, 1 on error
 *
 * Description:
 * - Processes command-line arguments as positive integers
 * - Prints sum followed by new line (0 if no arguments)
 * - Prints "Error" and returns 1 if:
 *   - Any argument contains non-digit characters
 *   - Any number is negative (though not explicitly stated,
 *   implied by "positive numbers")
 * - Assumes all values and sum fit within standard int range
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_digit(argv[i]))
		{
			printf("Errod\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

