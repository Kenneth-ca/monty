/**
 * f_pall - prints all elements of the stack
 * @params: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_pall(stack_t h, unsigned int line_number)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
