#include "monty.h"
/**
  * print_err - Print an error msg
  * @i: error msg to be printed
  * @l_num: number of the line
  * @txt: text to be printed for the error
  * Return: Nothing
  */
void print_err(int i, int l_num, char *txt)
{
	if (i == 0)
		fprintf(stderr, "USAGE: monty file\n");
	if (i == 1)
		fprintf(stderr, "Error: Can't open file <%s>\n", txt);
	if (i == 2)
		fprintf(stderr, "L%d: unknown instruction %s\n", l_num, txt);
}
