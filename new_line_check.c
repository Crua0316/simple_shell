#include "holberton.h"
/**
 * new_line_check - checks if last line is a new line character and turns it to null
*/
char *new_line_check(char *command)
{
	int len;

	len = strlen(command);
	command[len - 1] = '\0';

	return (command);
}
