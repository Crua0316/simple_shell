#include "holberton.h"
/**
 * builtins - checks builtin arguments
 * @args: arguments from stdin
 * Return: integer
*/
int builtins(char **args)
{
	int i = 0;

	if (args[1] == NULL)
	{
		if (!_strcmp("exit", args[0]))
		{
			free(args[0]);
			free(args);
			exit(EXIT_SUCCESS);
		}

		if (!_strcmp("env", args[0]))
		{
			while (environ[i])
			{
				_puts(environ[i]);
				i++;
			}
			free(args[0]);
			free(args);
			return (0);
		}
	}
	return (1);
}
