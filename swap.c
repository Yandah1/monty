#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the stack
 * @line_number: line number where swap is enecounted
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr1, *ptr2;
	(void) (*stack);

	if (globals->stack_length < 2)
	{
		dprintf(2, "L%d: can't swap , stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	
	ptr1 = globals->head;
	ptr2 = ptr1->next;
	ptr1->next = ptr2->next;
	if (ptr1->next)
		ptr1->next->prev = ptr1;
	ptr2->next = ptr1;
	ptr1->prev = ptr2;
	ptr2->prev = NULL;

	globals->head = ptr2;
}
