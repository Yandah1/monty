#include "monty.h"
/**
 * add - adds the top elements of  stack
 * @stack: pointer to the stack
 * @line_number: line number where add take place
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr1, *ptr2;

	(void) stack;
	if (globals->stack_length < 2)
	{
		dprintf(2, "L%d:  can't add, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	ptr1 = globals->head;
	ptr2 = ptr1->next;

	ptr2->n = ptr1->n + ptr2->n;
	delete_stack_node();

	globals->stack_length -= 1;
}
