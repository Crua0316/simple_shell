#include "holberton.h"
/**
 * check_input - checks whether input is a filesystem command
 * or a built-in.
 * Return: 0 on success, -1 on failure.
*/
int check_input(char **argv)
{
	void (*f)(char **);

	if (argv == NULL)
		return (-1);

	f = check_build(argv);

	if (f)
	{
		f(argv);
	}

	return (0);
}
/**
 * _init - gets environment list and first token from input
 * @name: name of the command from the command line
 * Return: full path of the find command
*/
char *_inicio(char *name)
{
	if (!name)
		return (NULL);

	char *value;
	char *dir;
	link_t *head;

	/*signal(SIGINT, signal_handler);*/

	head = NULL;
	value = get_env("PATH");
	head = linker(value);
	dir = _which(name, head);
	return (dir);
}
