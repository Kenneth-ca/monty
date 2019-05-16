/**
 * ex_monty - select the right function to execute
 * @tokens[0]: the parsed tokens
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int ex_monty (int l_num, char *cmd, char *argument)
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
	if (strcmp(op_codes[i].opcode, cmd) == 1)
		op_codes[i].f(stack, l_num);
}
/*Debe retornar algun estatus la ejecuion.
Si el estatus es que no se ejecuto bien el comnado, se debe cerrar el archivo */

}
