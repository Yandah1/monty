#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

#define _POSIX_C_SOURCE 200809L
Global_d *globals = NULL;
/**
 * main - entry point
 * @argc: the number of command line
 * @argv: the pointer to an array of string
 * Description: prints alphabets in lowercases
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_globals(argc);
	initialize_globals();
	get_stream(argv[1]);

	while (getline(&globals->line, &n, globals->stream) != -1)
	{
		globals->line_number += 1;
		tokenize_line();
		fetch_instruction();
		run_instruction();
		free_tokens();
	}
	close_stream();
	free_globals();

	return (0);
}

