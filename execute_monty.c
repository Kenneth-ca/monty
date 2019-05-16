/**
 * select_function - select the right function to execute
 * @tokens: the parsed tokens
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
instruction_s select_function(char **tokens)
{
	int i;

	n_instructions = 7;
	instruction_s op_codes[] = {
	{"push", f_push},
	{"pall", f_pall},
	{"pint", f_pint},
	{"pop", f_pop},
	{"swap", f_swap}
	{"add", f_add}
	{"nop", f_nop}
};

for (i = 0; i < n_instructions; i++)
{
	if (strcmp(op_codes[i].opcode == format))
		op_codes[i].f(stack, line_number);
}
}
