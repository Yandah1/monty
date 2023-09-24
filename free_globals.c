#include "monty.h"

/**
 * free_global_fd - free memory
 *
 */
void free_globals(void)
{
	if (globals == NULL)
		return;

	if (globals->stream != NULL)
	{
		fclose(globals->stream);
		globals->stream = NULL;
	}
	
	if (globals->instruction)
	{
		free(globals->instruction);
		globals->instruction = NULL;
	}
	free_head();

	if (globals->line)
	{
		free(globals->line);
		globals->line = NULL;
	}

	free(globals);
}


/**
 * free_head - frees memory
 *
 */
void free_head(void)
{
	if (globals->head)
		free_stack(globals->head);

	globals->head = NULL;
}

/**
 * free_stack - frees nodes
 * @head: first node
 * Return: void
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_stack(head->next);
	}

	free(head);
}

/**
 * free_all_args - frees all memory of args
 */
void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_globals();
}
