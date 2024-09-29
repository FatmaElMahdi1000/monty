#include"monty.h"
/**
 * handle_command - Processes the command from the input line
 * @buffer: the line buffer containing the command
 * @stack: pointer to the stack
 * @line_number: current line number in the input
 **/
void handle_command(char *buffer, stack_t **stack, int line_number)
{
	char *command = strtok(buffer, " "), *arg;

	if (command == NULL)
		return;

	if (strcmp(command, "push") == 0)
	{
		arg = strtok(NULL, " ");

		if (arg == NULL || !is_number(arg))
		{
			various_errors(5, command, line_number);

			return;
		}
		push(stack, line_number, arg);
	}
	else if (strcmp(command, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(command, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(command, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(command, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(command, "add") == 0)
		add(stack, line_number);
	else if (strcmp(command, "nop") == 0)
		nop(stack, line_number);
	else
		various_errors(3, command, line_number);
}
