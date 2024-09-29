#include "monty.h"

/**
 * invalid_instructions - checking Monty Opcodes
 *
 * @instruction: Monty content
 *
 * @line_no: line number
 *
 * Return: int
 **/

int invalid_instructions(char *instruction, int line_no)
{
	int i;
	char *vaild_inst[] = {"push", "pall", "pint", "pop",
		"swap", "add",  "nop",  NULL};
	for (i = 0; vaild_inst[i] != NULL; i++)
	{
		if (strcmp(instruction, vaild_inst[i]) == 0)
		{
			return (1);
		}
	}
	various_errors(3, instruction, line_no);
	return (0);
}
