#include "holberton.h"
/**
 * readinput - reads and stores from stdin
 * Return: pointer to buffer
*/
char *readinput(void)
{
	char *buffer = NULL, *line = NULL;
	size_t size = 0;
	int c = 0;
	unsigned int i = 0;

	c = getline(&buffer, &size, stdin);

	if (c == EOF)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}
	if (c == 1)
	{
		free(buffer);
		return (NULL);
	}

	line = malloc(sizeof(char) * strlen(buffer));
	if (!line)
		return (NULL);
	for (; i < strlen(buffer) - 1; i++)
	{
		line[i] = buffer[i];
	}
	line[i] = '\0';
	free(buffer);
	return (line);
}
