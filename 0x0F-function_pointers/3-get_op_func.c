#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -  function that selects the correct function to perform.
 * @s: methodsss
 * Return: A pointerrr
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int l = 0;

	while (ops[l].op != NULL && *(ops[l].op) != *s)
		l++;

	return (ops[l].f);
}
