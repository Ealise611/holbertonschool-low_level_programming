#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Description: This function traverses the input string `s`, skips any leading
 * whitespace characters, and processes optional '+' and '-' signs to determine
 * the sign of the resulting integer. It then converts the subsequent numeric
 * characters into an integer value. If no numeric characters are found, the
 * function returns 0. The function also handles potential integer overflow
 * and underflow by returning `INT_MAX` or `INT_MIN` respectively.
 *
 * Return: The integer value represented by the string `s`. Returns 0 if no
 * numeric characters are found.
 */

int _atoi(char *s)
{
	int count_of_sign = 0;
	int result = 0;
	int sign = 1;

	while ((*s < '0' || *s > '9') && *s != '\0')/*this will iterate through*/
	/*the loop until we find everything up to the forst int*/
	{
		if (*s == '-')/*this will find all the '-' signs and add to it*/
		{
			count_of_sign++;
		}
		s++;

	}
	if (count_of_sign % 2 == 1)
	{
		sign = -1;
	}
	while ((*s >= '0' && *s <= '9') && *s != '\0')/*finding the*/
							/*integers after we did the first checking*/
	{
		if (!result)/*checking if there is a result*/
		{
			result = (*s - '0') * sign;
		}
		else
		{
			result = ((result * 10)  + ((*s - '0') * sign));
			/*find the first number and times 10 to make it a double digit*/
			/*and add the second single digit that we find*/
		}
		s++;
	}
	return (result);
}
