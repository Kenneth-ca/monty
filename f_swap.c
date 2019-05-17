#include "monty.h"
/**
 * f_swap - change info from two nodes
 * @head: head of the stack
 * @line_number: line of the comand
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
void f_swap(stack_t **head, unsigned int line_number)
{
	int temp, aux;

	line_number = line_number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*head != NULL && (*head)->next != NULL)
	{	temp = (*head)->n;
		aux = (*head)->next->n;
		(*head)->n = aux;
		(*head)->next->n = temp;
	}
}
