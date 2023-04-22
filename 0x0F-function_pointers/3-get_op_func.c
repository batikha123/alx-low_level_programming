#include "3-calc.h"
/**
 * get_op_func - return a pointer to a fuction pointer
 * @s: string
 * Return: integer or NULL
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

	while (i < 5)
	{
		if ((ops[i].op)[0] == s[0] && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	return (ops[i].f);

}
