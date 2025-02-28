#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The input string to be encoded.
 *
 * Description: This function takes a string as input and replaces certain
 * letters with their corresponding 1337 (leet) replacements. Specifically:
 * - 'a' or 'A' is replaced with '4'
 * - 'e' or 'E' is replaced with '3'
 * - 'o' or 'O' is replaced with '0'
 * - 't' or 'T' is replaced with '7'
 * - 'l' or 'L' is replaced with '1'
 *
 * Return: A pointer to the encoded string.
 */


char *leet(char *s)
{
	int count = 0;
	int count_2;
	char og[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (s[count] != '\0')
	{
		count_2 = 0;

		while (og[count_2] != '\0')
		{
			if (s[count] == og[count_2])
			{
				s[count] = replace[count_2];
			}
			count_2++;
		}
		count++;
	}
	return (s);
}
