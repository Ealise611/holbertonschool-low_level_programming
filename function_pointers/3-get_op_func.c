#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as an argument.
 *
 * Description: This function takes a string representing an operator
 * (e.g., "+", "-", "*", "/", "%") and returns a pointer to the corresponding
 * function that performs the operation. It searches through a predefined
 * list of operator-function pairs and returns the matching function.
 * If no valid operator is found, it returns NULL.
 *
 * Return: A pointer to the function corresponding to the given operator,
 *         or NULL if the operator is invalid.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)/*loop through array*/
	{
		if (*s == *(ops[i].op))/* check if input operator matches*/
		{
			return (ops[i].f);/*return the function*/
		}
		i++;
	}
	return (NULL);/*if no match, return NULL*/
}
