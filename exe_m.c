#include "monty.h"
/**
 * exe_m - select the right function to execute
 * @stack: a pointer to the stack
 * @line_number: the number of lines
 * @tok_0: the instruction
 *
 * Return: 0 on success
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
return (0);
}
