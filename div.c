#include "monty.h"

/**
 * div - divides the second top element of the stake
 * 	by the top elements
 * @stack: the pointer to  the stack
 * @line_number:
 *
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = (*stack);
	tmp2 = tmp1->next;

	if (tmp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp2->n = tmp2->n / tmp1->n;

	(*stack) = tmp2;
	free(tmp1);

	globals->stack_length -=  1;
}
