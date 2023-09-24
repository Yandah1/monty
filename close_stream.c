#include "monty.h"
/**
 * close_stream - Closes stream
 *
 */
void close_stream(void)
{
	if (globals->stream == NULL)
		return;

	fclose(globals->stream);
	globals->stream = NULL;
}
