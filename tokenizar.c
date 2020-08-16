#include "holberton.h"
/**
 * token
*/
char **tokens(char *command)
{
	int i, j;
	char *duplicate, *token;
	char **argu;

	// Counting the token total number

	i = 1;
	duplicate = strdup(command);
	//printf("Duplicate went out well: %s\n", duplicate);
	token = strtok(duplicate, " ");
	//printf("First token should be the string itself: %s\n", token);

	while (token != NULL)
	{
		token = strtok(NULL, " ");
		//printf("Each token till now is: %s\n", token);
		i++;
	}

	// allocating space for the maximum number of arguments

	argu = malloc(sizeof(char *) * i);

	// Saving each token

	token = strtok(command, " ");
	j = 0;
	while (token != NULL)
	{
		argu[j] = token;
		token = strtok(NULL, " ");
		//printf("token #%i: %s, which is allocated in this memory direction: [%p]\n", j, argu[j], token);
		j++;
	}

	return (argu);
}
