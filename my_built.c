#include "holberton.h"
/**
 * myexit - executes the exit built in
 * @argv: double pointer to string.
*/
void myexit(char **argv)
{
	(void)argv;
	exit(0);
}
/**
 * _env - prints environment list
 * @argv: double pointer to string
*/
void _env(char **argv)
{
	int i;
	(void)argv;

	i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		_puts('\n');
		i++;
	}
}
