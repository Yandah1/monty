#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * initialize_global_fd - Initializes the global_file_data struct.
 *
 * This function allocates memory for struct and sets its members.
 * If the allocation fails, it frees the file pointer and
 * exits with a failure status.
 */
void initialize_globals(void)
{
	globals = malloc(sizeof(Global_d));
	if (globals == NULL)
	{
		malloc_failed();
	}

	globals->instruction = malloc(sizeof(instruction_t));
	if (globals->instruction == NULL)
	{
		malloc_failed();
	}

	globals->stream = NULL;
	globals->line = NULL;
	globals->num_tokens = 0;
	globals->line_number= 0;
}
