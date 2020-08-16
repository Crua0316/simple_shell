#include "holberton.h"
char *prompt(void)
{
	int i = 0;
	char *buffer = NULL;
	size_t size;
	//signal(SIGINT, signal_handler);

	printf("#cisfun$ ");
	getline(&buffer, &size, stdin);
	i++;

	return (buffer);
}
