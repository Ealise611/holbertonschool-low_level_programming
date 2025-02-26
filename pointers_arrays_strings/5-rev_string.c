#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description:
 * This function takes a pointer to a character array (string) and reverses
 * its content in place, modifying the original string.
 */

void rev_string(char *s)
{
	int len = 0;
	int count = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (count < (len / 2))
	{
		temp = s[count];
		s[count] = s[len - 1 - count];
		s[len - 1 - count] = temp;
		count++;
	}


}
