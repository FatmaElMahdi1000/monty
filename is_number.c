#include "monty.h"

/**
 * is_number - checks if the input intger
 *
 *@str: string
 *
 *Return: int
 */

int is_number(const char *str)
{
	if (*str == '\0')
		return (0);

	if (*str == '-' || *str == '+')
	{
		str++;
	}

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
