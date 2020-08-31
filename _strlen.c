#include "holberton.h"
/**
 * _strlen - calculates length of the string
 * @str: pointer to string
 * Return: integer number of the size
*/
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		i++;
	}

	return (i);
}
