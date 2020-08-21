#include "holberton.h"
/**
 * _strlen - calculates a string length.
 * @str: string to find it's length.
 * Return: int which is the final length.
*/
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
