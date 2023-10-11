#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -  keep it out
 *
 * @s: its me
 *
 * Return: i win
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
	int h = 0;

	while (h < 5)
	{
		if (*(ops[h]).op == *s && *(s + 1) == '\0')
			return (ops[h].f);
		h++;
	}
	return (NULL);
}
