#include "main.h"


char *_strcpy(char *dest, char *src)
{
	char c = 99;
	char *dst = dest;

	while (c != 0)
	{
		c = *src;
		*dest = c;
		*dest++;
		*src++;
	}
	return (dst);
}
