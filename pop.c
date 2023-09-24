#include "monty.h"

/**
 * pop - remove top element from stack
 * @stack: pointer
 * @lineNum: line number where the function is called
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (globals->head == NULL)
	{
		dprintf(2, "L%d: can't pop am empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	delete_stack_node();
	globals->stack_length -= 1;
}

/**
 * delete_stack_node -  delete node on the top
 *
 * Return: void
 */

void delete_stack_node(void)
{
	stack_t *temp;

	temp = globals->head;
	globals->head = temp->next;
	free(temp);
}
