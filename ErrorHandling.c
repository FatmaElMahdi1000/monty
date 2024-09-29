#include"monty.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * various_errors - Error handling function
 *
 * @numberoferrors: Number of errors
 * Return: void
**/
void various_errors(int numberoferrors, ...)
{
	int line_number;
	char *operations;
	va_list errors;

	va_start(errors, numberoferrors);

	switch (numberoferrors)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n", va_arg(errors, char *));
			break;
		case 3:
			line_number = va_arg(errors, int);
			operations = va_arg(errors, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, operations);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			line_number = va_arg(errors, int);
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			break;
		default:
			break;
	}
	va_end(errors); /*cleaning up the list*/
	exit(EXIT_FAILURE);
}
