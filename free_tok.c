#include "monty.h"
/**
 * free_tokens - Frees token memory
 *
 */
void free_tokens(void)
{
	int i = 0;

	if (globals->tokens == NULL)
		return;

	while (globals->tokens[i])
	{
		free(globals->tokens[i]);
		i++;
	}
	free(globals->tokens);
	globals->tokens = NULL;
}
