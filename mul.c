#include "monty.h"
/**
 * mul - multiplies the second top element of the stack
 *	with the top element of the stack.
 * @stack: the pointer
 * @line_number: line where multiplication take place
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (globals->stack_length < 2)
	{
		dprintf(2, "L%d: can't mull, stacl too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = globals->head;
	temp2 = temp1->next;

	temp2->n = temp2->n * temp1->n;
	delete_stack_node();

	globals->stack_length -= 1;
}
