#include "monty.h"

/**
 * open_monty - opening monty file
 * Return: void
 */
#define LIMIT 1000000
void open_monty(const char *filename)
{
	FILE *fp;

	fp = fopen(filename, "r");

	if (!filename)
	{
		various_errors(1, filename);
	}

	else if (!fp)
	{
		various_errors(2, filename);
	}
	else
	{
		reading_monty(fp);
		fclose(fp);
	}
}
/**
 *reading_monty - Reading function
 * @fp: pointer to monty file
 *Return: void
**/
void reading_monty(FILE *fp)
{
	stack_t *stack = NULL;
	int line_number = 1;
	char buffer[LIMIT];

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		buffer[strcspn(buffer, "\n")] = 0;
		handle_command(buffer, &stack, line_number);
		line_number++;
	}
exit(EXIT_SUCCESS);
}
