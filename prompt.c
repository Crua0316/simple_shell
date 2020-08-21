#include "holberton.h"
/**
 * prompt - prints the prompt and gets input form command line
 * Return: pointer to string passed as input.
*/
char *prompt(void)
{
	size_t size;
	int getline_int;
	char *buffer = NULL;

	if (isatty(STDIN_FILENO))
		_puts("#cisfun$ ");

	getline_int = getline(&buffer, &size, stdin);

	if (getline_int == EOF)
	{
		free(buffer);
		exit(0);
	}

	return (buffer);
}
