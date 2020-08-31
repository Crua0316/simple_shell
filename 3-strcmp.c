#include "holberton.h"
/**
 * _strcmp - function to compare two strings
 * @s1: string compared
 * @s2: string compared
 * Return:  0 if they are the same and -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
