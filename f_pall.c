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
	(void)line_number;

	for (; *stack != NULL; *stack = (*stack)->next)
	{
		printf("%d\n", (*stack)->n);
		i++;
	}
}
