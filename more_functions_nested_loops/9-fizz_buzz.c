#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 with specific rules.
 *
 * Description: The program prints the numbers from 1 to 100, each followed
 *              by a space. For multiples of three, it prints "Fizz" instead
 *              of the number, for multiples of five it prints "Buzz", and for
 *              numbers that are multiples of both three and five, it prints
 *              "FizzBuzz". The output should end with a new line.
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 1;

	while (a < 100)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", a);
		a++;
	}
	return (0);
}
