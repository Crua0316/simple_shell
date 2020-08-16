#include "holberton.h"
char *prompt(void)
{
	int i = 0;
	char *buffer = NULL;
	size_t size;
	//signal(SIGINT, signal_handler);

	while (i < 1)
	{
		printf("#cisfun$ ");
		getline(&buffer, &size, stdin);
		i++;
	}

	return (buffer);
}
