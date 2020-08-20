#include "holberton.h"
/**
 * prompt - prints the prompt and gets input form command line
 * Return: pointer to string passed as input.
*/
char *prompt(void)
{
	char *buffer;
	size_t size;
	int getline_int;
	int isatty_int;

	isatty_int = isatty(STDIN_FILENO);
	buffer = NULL;

	if (isatty_int == 1)
		printf("#cisfun$ ");

	getline_int = getline(&buffer, &size, stdin);

	if (isatty_int == 0 && getline_int == EOF)
	{
		exit(0);
	}

	return (buffer);
}
