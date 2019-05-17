#include "monty.h"
int global_number = 0;

/**
 * main - main function.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int stat;

	if (argc != 2)
	{
		print_err(0, 0, NULL);
		exit(EXIT_FAILURE);
	}
	stat = control_monty(argc, argv);
	printf("\n %d \n", stat);
	return (0);
}
