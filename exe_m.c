#include "monty.h"
/**
 * exe_m - select the right function to execute
 * @tokens[0]: the parsed tokens
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int exe_m(stack_t **stack, unsigned int line_number, char *tok_0)
{
	int i;
	int n_instructions = 7;

	instruction_t op_codes[] = {
	{"push", f_push},
	{"pall", f_pall},
	{"pint", f_pint},
	{"pop", f_pop},
	{"swap", f_swap},
	{"add", f_add},
	{"nop", f_nop}
};

for (i = 0; i < n_instructions; i++)
{
	if (strcmp(op_codes[i].opcode, tok_0) == 0)
		op_codes[i].f(stack, line_number);
}
/*Debe retornar algun estatus la ejecuion.
Si el estatus es que no se ejecuto bien el comnado, se debe cerrar el archivo */
return (0);
}
