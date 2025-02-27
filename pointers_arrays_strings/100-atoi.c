#include "main.h"

int _atoi(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		while ( *s >=  48 && *s <= 57)
		{
			_putchar(*s);
			*s++;
			
		}
		
		*s++;

		_putchar('\n');
	}
}
		
