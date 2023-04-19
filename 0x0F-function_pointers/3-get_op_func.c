#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects an operation to be performed
 * @s: operation to be performed
 *
 * Return: Returns a pointer to a function to perform the operation
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

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
		return (NULL);

	while (ops[i].op && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
