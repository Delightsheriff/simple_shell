#include "shell.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	char *prompt = "Bash $ ";
	char *line = NULL;
	size_t size = 0;
	ssize_t chars_read;
	char *token;
	(void)argc;

	while (1)
	{
		printf("%s", prompt);
		chars_read = getline(&line, &size, stdin);

		if (chars_read == -1)
		{
			printf("\n");
			free(line);
			break;
		}
		token = strtok(line, " \n");
		if (token == NULL)
		{
			continue;
		}
		if (execve(token, argv, NULL) == -1)
		{
			perror("Error");
			fflush(stdin);
		}
	}
	free(line);
	return (0);
}
