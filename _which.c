#include "holberton.h"
/**
 * _which - determines executable path
 * @args: commands passed
 * Return: command path
*/
char *_which(char **args)
{
	struct stat st;
	char *fullpath, **pathdirs, *command;
	int k;

	k = 0;

	if (stat(args[0], &st) == 0)
		return (args[0]);

	fullpath = _getenv("PATH");
	pathdirs = pathslicer(fullpath);

	while (pathdirs[k])
	{
		command = str_concat(pathdirs[k], args[0]);
		if (stat(command, &st) == 0)
		{
			free(pathdirs[0]);
			free(pathdirs);
			return (command);
		}
		k++;
		free(command);
	}

	return (NULL);
}
