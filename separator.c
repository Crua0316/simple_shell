#include "holberton.h"
/**
 * separator - description
 * @line: user input
 * Return: duoble pointer with tokes
*/
char **separator(char *line)
{
	char *token, *dup;
	char **args;
	int c, i;

	c = 1;
	i = 0;

	dup = _strdup(line);

	token = strtok(dup, " ");

	while (token != NULL)
	{
		token = strtok(NULL, " ");
		c++;
	}
	args = malloc(sizeof(char *) * c);

	if (!args)
	{
		free(dup);
		free(line);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");

	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}

	args[i] = NULL;
	free(dup);
	return (args);
}
