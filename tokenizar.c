#include "holberton.h"
/**
 * tokens - get tokens out of the command line input
 * @command: string obtained from the command line
 * Return: pointer to array of characters, each one being command
 * and arguments passed as input.
 * Description: Command is the string passed as input in the
 * command line. First we duplicate the string in order to count
 * the final tokens and allocated the right space in memory. Then
 * we strtok the original string and return an array of pointers to string.
*/
char **tokens(char *command)
{
	int i, j;
	char *duplicate, *token;
	char **argu;

	command = new_line_check(command);

	i = 1;
	duplicate = strdup(command);
	token = strtok(duplicate, " ");

	while (token != NULL)
	{
		token = strtok(NULL, " ");
		i++;
	}
	free(duplicate);

	argu = malloc(sizeof(char *) * i);

	if (!argu)
		return (NULL);

	argu[0] = strtok(command, " ");

	j = 1;

	while((argu[j] = strtok(NULL, " ")))
		j++;

	return (argu);
}
