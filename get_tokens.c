#include "monty.h"

/**
  * get_tokens - tokenizes text lines intro strings
  * @string: input to tokenize
  * Return: tokenized input
  */
char **get_tokens(char *string)
{
	int bufsize = 10000;
	int i = 0;
	char **my_tokens;
	char *token;
	char *separators = " \t\n";

	my_tokens = malloc(sizeof(char *) * bufsize);
	if (my_tokens == NULL)
		exit(EXIT_FAILURE);

	token = strtok(string, separators);
	while (token != NULL)
	{
		my_tokens[i] = token;
		i++;
		token = strtok(NULL, separators);
	}
	my_tokens[i] = NULL;
	return (my_tokens);
}
