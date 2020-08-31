#include "holberton.h"
/**
 * _strdup - duplicates a string
 * @str: string input to duplicate
 * Return: pointer to the newly alocated string
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (!str)
		return (NULL);

	i = 0;
	len = _strlen(str);
	duplicate = malloc(sizeof(char) * len);
	if (!duplicate)
		return (NULL);

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
