#include "monty.h"

/**
 * malloc_failed - handles the error
 *
 * Return: nothing
 */
void free_global_fd();

void malloc_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_global_fd();
	exit(EXIT_FAILURE);
}
