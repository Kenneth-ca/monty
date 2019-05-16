#include "monty.h"
/**
 * f_pall - prints all elements of the stack
 * @params: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	stack_t **temp = stack;

	(void)line_number;
	for (; *temp != NULL; *temp = (*temp)->next)
	{
		printf("%d\n", (*temp)->n);
		i++;
	}
}
