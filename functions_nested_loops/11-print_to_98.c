#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from the number
 *              provided as the parameter `n` up to 98, inclusive. Each
 *              number is separated by a comma and a space. The function
 *              handles both cases where `n` is less than or greater than 98.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	else
		{
			for (; n > 98; n--)
			{
			printf("%d, ", n);
			}
		}
	printf("98\n");
}
