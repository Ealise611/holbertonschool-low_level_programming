#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a given name
 * @name: Pointer to the name string to be printed
 * @f: Function pointer to the printing function
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It checks if both parameters are not NULL, then calls the function `f`,
 * passing `name` as an argument to print it. If `f` is NULL, nothing happens.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
