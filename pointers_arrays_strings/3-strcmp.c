#include "main.h"


int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int result = 0;

	while (s1[count] == s2[count] && s1[count] && s2[count])
	{
		count++;
	}
	result = s1[count] - s2[count];
	return (result);
}


