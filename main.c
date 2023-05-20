#include "shell.h"

/**
 * main - Entry point
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: integer
 */
int main(int ac, char **argv)
{
	char *prompt = "Bash $ ";
	char *line;
	size_t size = 0;

	(void)ac;
	 (void)argv;

	while (1)
	{
		printf("%s", prompt);
		fflush(stdout);

		if (getline(&line, &size, stdin) == -1)
		{
			printf("\n");
			break;

		}
	}
		free(line);
		return (0);
}

