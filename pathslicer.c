#include "holberton.h"
/**
 * pathslicer - slices path into absolute paths.
 * @fullpath: from environ PATH
 * Return: full path double pointer
*/
char **pathslicer(char *fullpath)
{
	char *pathcount, *pathtokens, *token, **pathdirs;
	int i, j;

	j = 0;
	pathcount = _strdup(fullpath);
	pathtokens = _strdup(fullpath);

	token = strtok(pathcount, ":");
	i = 1;
	while (token)
	{
		i++;
		token = strtok(NULL, ":");
	}
	free(pathcount);

	pathdirs = malloc(sizeof(char *) * i);
	if (!pathdirs)
		return (NULL);

	token = strtok(pathtokens, ":");
	while (token)
	{
		pathdirs[j] = token;
		j++;
		token = strtok(NULL, ":");
	}
	pathdirs[j] = token;

	return (pathdirs);
}
