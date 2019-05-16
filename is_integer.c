#include "monty.h"

/**
 * _printf - prints according to format
 * @format: The given format
 *
 * Return: 1 if it is a number, 0 if not.
 */
int is_integer(char *tokens)
{
	int i = 0;

	if (tokens[i] == '-')
		i++;
	for (; tokens[i] != '\0'; i++)
	{
		if (tokens[i] < 48 || tokens[i] > 57)
			return (0);
	}
	global_number = atoi(tokens);
	return (1);
}
