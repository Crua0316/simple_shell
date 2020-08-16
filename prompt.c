#include "holberton.h"
/**
 * prompt - prints the prompt and gets input form command line
 * Return: pointer to string passed as input.
*/
char *prompt(void)
{
	int i = 0;
	char *buffer = NULL;
	size_t size;

	printf("#cisfun$ ");
	getline(&buffer, &size, stdin);
	i++;

	return (buffer);
}
