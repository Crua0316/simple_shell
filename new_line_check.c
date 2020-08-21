#include "holberton.h"
/**
 * new_line_check - checks if last line is a new line character
 * and turns it to null
 * @command: string passed as input from the command line
 * Return: pointer to the same string without the new line character
*/
char *new_line_check(char *command)
{
	int len;

	if (command[0] == '\n')
		return (NULL);
	len = _strlen(command);
	command[len - 1] = '\0';

	return (command);
}
