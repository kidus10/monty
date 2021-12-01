#include "monty.h"

/**
* printerr - prints error and exits
* @str: error message
*
* Return: Always Void
*/
void printerr(int errnum, int lnum)
{
	char *errone = ": usage: push integer";
	char *errtwo = ": can't pint, stack empty";
	char *errthree = ": unknown instruction <opcode>";
	char *errfour = "USAGE: monty file";
	char *errfive = "Error: Can't open file <file>";

	if (errnum == 1)
		dprintf(STDERR_FILENO, "L%d%s\n", lnum, errone);
	else if (errnum == 2)
		dprintf(STDERR_FILENO, "L%d%s\n", lnum, errtwo);
	else if (errnum == 3)
		dprintf(STDERR_FILENO, "L%d%s\n", lnum, errthree);
	else if (errnum == 4)
		dprintf(STDERR_FILENO, "%s\n", errfour);
	else if (errnum == 5)
		dprintf(STDERR_FILENO, "%s\n", errfive);	
	exit(EXIT_FAILURE);
}