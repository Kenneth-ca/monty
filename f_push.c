/**
 * print_char - writes the character c
 * @params: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_push(stack_t head, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
}
