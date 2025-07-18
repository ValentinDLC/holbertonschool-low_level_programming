#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects correct operation function
 * @s: operator passed as argument
 * Return: pointer to function matching operator, or NULL if not found
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
	int i = 0;

	while (ops[i].op && *(s + 1) == '\0' && *s != '\0')
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

