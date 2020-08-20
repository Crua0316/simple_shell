#include "holberton.h"
/**
 * myexit - executes the exit built in
*/
void myexit(char **argv)
{
	(void)argv;
	exit(0);
}
/**
 * env - prints environment list
*/
void _env(char **argv)
{
	int i;
	(void)argv;

	i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
