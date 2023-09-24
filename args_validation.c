#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * validate_arguments - Validates the number of arguments.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: None.
 */
void validate_globals(int argc)
{
	if (argc != 2)
	{

		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
