#include "monty.h"
/**
 * f_swap - swaps the top two numbers
 * @head: a pointer to the stack
 * @line_number: the number of lines
 *
 */
void f_swap(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;

	(void)line_number;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free(new_node);
		return;
	}
	new_node->n = global_number;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
}
