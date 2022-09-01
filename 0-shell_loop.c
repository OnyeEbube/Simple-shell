#include "main.h"

/**
 * shell_loop - this function reads, parses and executes a command
 */

void shell_loop(void)
{
	char *line;
	char **arg;
	int mode;

	do
	{
		printf("$ ");
		line = shell_read_line();
		arg = shell_split_line(line);
		mode = shell_execute(arg);

		free(line);
		free(arg);
	}
	while (mode);
}
