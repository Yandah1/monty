#include "monty.h"

/**
 * pall - Prints all elements in the stack.
 * @stack: pointer
 * @line_number: line number where the function is called
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = globals->head;

	(void) line_number;
	(void) stack;

	if (!temp)
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
