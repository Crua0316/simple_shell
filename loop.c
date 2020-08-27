#include "holberton.h"
/**
 * main - starts shell loop
 * @ac: arguments number
 * @av: arguments array
 * Return: integer when success.
*/
int main(int ac, char **av)
{
	char *line, *command, **args;
	(void)ac;
	(void)av;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "#cisfun$ ", 9);
		}

		line = readinput();
		if (!line)
			continue;

		args = separator(line);

		if (builtins(args) == 0)
			continue;

		command = _which(args);
		_exec(command, args);

		free(args[0]);
		free(args);
	}

	return (0);
}
