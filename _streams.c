#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "monty.h"

/**
 * get_failed_stream - Display an error message and exit the program.
 * @fileName: The name of the file that caused the error.
 *
 */

void get_failed_stream(char *fileName)
{
	dprintf(2, "Error: Failed to open file %s\n", fileName);
	free_globals();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - open file in read-only mode
 * @fileName: the name of the file to open
 *
 * If successful, the stream is stored in the
 * global_fd structure.
 */
void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
	{
		get_failed_stream(fileName);
	}

	globals->stream = fdopen(fd, "r");
	if (globals->stream == NULL)
	{
		close(fd);
		get_failed_stream(fileName);
	}
}
