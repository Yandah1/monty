#include "monty.h"

/**
 * malloc_failed - handles the error
 *
 * Return: nothing
 */
void free_globals();

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_globals();
	exit(EXIT_FAILURE);
}
