#include "holberton.h"
/**
 * tokens - 
*/
char **tokens(char *command)
{
	int i, j, len;
	char *duplicate, *token;
	char **argu;

	//checking last char different from \n
	command = new_line_check(command);

	// Counting the token total number
	i = 1;
	duplicate = strdup(command);
	printf("Duplicate went out well: %s\n", duplicate);
	token = strtok(duplicate, " ");
	printf("First token should be the string itself: %s\n", token);

	while (token != NULL)
	{
		token = strtok(NULL, " ");
		printf("Each token till now is: %s\n", token);
		i++;
	}
	//Freing duplicate string: CHECK IF ERROR REPORT NECESARY
	free(duplicate);

	// allocating space for the maximum number of arguments and checking status

	argu = malloc(sizeof(char *) * i);
	if (!argu)
		return (NULL);

	// Saving each token

	argu[0] = strtok(command, " ");
	j = 1;
	while (argu[j] != NULL)
	{
		argu[j] = strtok(NULL, " ");
		printf("token #%i: %s, which is allocated in this memory direction: [%p]\n", j, argu[j], token);
		j++;
	}

	return (argu);
}
