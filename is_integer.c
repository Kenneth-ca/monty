#include "monty.h"
/**
 * is_integer - Finds whether  mumber is an integer
 * @tokens: string to be analized to find if it is a integert
 *
 * Return: 1 if it is a number, 0 if not.
 */
int is_integer(char *tokens)
{
	int i = 0;
	int len, neg = 0, valor;

	if (tokens[i] == '-')
		i++;
	for (; tokens[i] != '\0'; i++)
	{
		if (tokens[i] < 48 || tokens[i] > 57)
			return (0);
	}

	if (tokens != NULL)
	{
		len = strlen(tokens);
		valor = 0;
		i = 0;
		if (tokens[0] == '-')
		{
			neg = 1;
			i = i + 1;
		}
		for (; i < len; i++)
		{
			valor = valor * 10 + (tokens[i] - '0');
		}
	}
	if (neg)
		valor = -valor;

	global_number = valor;
	return (1);
}
