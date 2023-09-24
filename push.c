#include "monty.h"
#include <stdio.h>
/**
 * push - push interger on the stack
 * @stack: pointer
 * @lineNum: line num where push is called
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	globals->tail = globals->head;
	if (globals->num_tokens <= 1 || !(is_number(globals->tokens[1])))
	{
		free_globals();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack) = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();
	(*stack)->n = (int) atoi(globals->tokens[1]);

	(*stack)->next = (*stack)->prev = NULL;

	if (globals->head)
	{
		while (globals->tail->next)
			globals->tail = globals->tail->next;
		if (globals->i == 0)
		{
			(*stack)->next = globals->head;
			globals->head->prev = (*stack);
			globals->head = (*stack);
		}
		else if (globals->i == 1)
		{
			globals->tail->next = (*stack);
			(*stack)->prev = globals->tail;
			globals->tail = (*stack);
		}
	}
	else
		globals->head = (*stack);
	globals->stack_length += 1;
}
