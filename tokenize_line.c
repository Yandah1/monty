#include "monty.h"

/**
 * tokenize_line - function to tokenize line from files
 *
 * Return: nothing
 */

void tokenize_line(void)
{
	int i = 0;
	char *dels = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(globals->line) + 1));
	strcpy(linecpy, globals->line);
	globals->num_tokens = 0;
	token = strtok(linecpy, dels);
	while (token)
	{
		globals->num_tokens += 1;
		token = strtok(NULL, dels);
	}

	globals->tokens = malloc(sizeof(char *) * (globals->num_tokens + 1));
	strcpy(linecpy, globals->line);
	token = strtok(linecpy, dels);
	while (token)
	{
		globals->tokens[i] = malloc(sizeof(char *) *
				(strlen(token) + 1));
		if (globals->tokens[i] == NULL)
		{
			malloc_failed();
		}
		strcpy(globals->tokens[i], token);
		token = strtok(NULL, dels);
		i++;
	}
	globals->tokens[i] = NULL;
	free(linecpy);
}
