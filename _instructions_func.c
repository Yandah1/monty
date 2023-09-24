#include "monty.h"

/**
 * fetch_instruction - set instructions
 *
 */
void fetch_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"pall", &pall}, {"add", &add},
		{"nop", &nop},
		{NULL, NULL},
	};


	if (globals->num_tokens == 0)
		return;
	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, globals->tokens[0]) == 0)
		{
			globals->instruction->opcode = instructions[i].opcode;
			globals->instruction->f = instructions[i].f;
			return;
		}
	
	}

	invalid_instruction();
}
/**
 * invalid_instruction - function that handles unknown erroe
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d:  unknown instruction %s\n", globals->line_number, globals->tokens[0]);
	close_stream();
	free_tokens();
	free_globals();
	exit(EXIT_FAILURE);
}

/**
 * run_instruction - runs instruction for global_fd
 */

void run_instruction(void)
{
	stack_t *stack = NULL;

	if (globals->num_tokens == 0)
		return;

	globals->instruction->f(&stack, globals->line_number);
}
