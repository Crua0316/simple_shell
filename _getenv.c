#include "holberton.h"
/**
 * _getenv - gets environment variables
 * @path: name of the variable to print
 * Return: pointer to absolute paths
*/
char *_getenv(char *path)
{
	char *fullpath;
	int i;

	fullpath = NULL;

	i = 0;

	while (environ[i])
	{
		if (!_strcmp(environ[i], path))
		{
			fullpath = (*(environ + i));
			fullpath = fullpath + _strlen(path) + 1;
			return (fullpath);
		}
		i++;
	}

	return (fullpath);
}
