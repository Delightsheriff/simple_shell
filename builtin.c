#include "shell.h"

/**
 * execBuiltInCommands - Executes a built-in command
 * @u_tokns: first argument
 * @line: second argumnet
 *
 * Return: 1 if is a built-in command or 0 if not
 */
int execBuiltInCommands(char **u_tokns, char *line)
{
	int i = 0;
	char *ListBuiltinCmds[] = { "exit", "cd", "help", "env", NULL };

	while (ListBuiltinCmds[i])
	{
		if (_strcmp(u_tokns[0], ListBuiltinCmds[i]) == 0)
		{
			switch (i)
			{
				case 0:
					_handle_exit(u_tokns, line);
				case 1:
					chdir(u_tokns[1]);
					return (1);
				case 2:
					_open_help();
					return (1);
				case 3:
					_print_env();
					return (1);
				default:
					break;
			}
		}
		i++;
	}

	return (0);
}

/**
  * _print_env - Prints environment built-in
  *
  * Return: Nothing
  */
void _print_env(void)
{
	int i = 0, j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}

/**
  * _getenv - Gets an environment variable
  * @name: The variable to find in the system environment
  *
  * Return: The content of the environment variable
  */
char *_getenv(const char *name)
{
	int i = 0;
	char *env_var = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], _strlen(name)) == 0)
		{
			env_var = _strdup(environ[i]);
			while (*env_var != '=')
				env_var++;

			++env_var;
			return (env_var);
		}
		i++;
	}

	return (NULL);
}

/**
 * _open_help - Opens the Shell help
 *
 * Return: Nothing to returns
 */
void _open_help(void)
{
	_puts("\n***WELCOME TO THE SHELL HELP***\n");
}
