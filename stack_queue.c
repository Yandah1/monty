#include "monty.h"

/**
 * _stack - sets the format fo the data to a stack (LIFO)
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	globals->lifo = 1;
}



/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack:: head of the linked list
 * @line_number: line number;
 * Return: no return
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	globals->lifo = 0;
}

