#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second
 *	top element of the stack.
 * @stack: the pointer  to the stack
 * @line_number:line number where subtraction will take place
 *
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;
	(void) stack;
	if (globals->stack_length < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = globals->head;
	temp2 = temp1->next;

	temp2->n = temp2->n - temp1->n;
	delete_stack_node();

	globals->stack_length -= 1;
}
