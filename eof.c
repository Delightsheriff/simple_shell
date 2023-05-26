#include "shell.h"

/**
 * signal_handler - Handles the end of file signal
 * @sig_id: The identifier
 *
 * Return: Nothing to returns
 */
void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
	{
		write(STDOUT_FILENO, "\n($) ", 5);
	}
}
