#include "holberton.h"
/**
 * _exec - executes command
 * @command: full path of the command
 * @args: arguments
*/
void _exec(char *command, char **args)
{

	int status;
	pid_t pid;

	pid = fork();

	if (pid < 0)
	{
		perror("Error forking child");
	}
	if (pid == 0)
	{
		if (execve(command, args, environ) == -1)
		{
			perror("Error exec: ");
			exit(errno);
		}
		exit(errno);
	}
	else
	{
		wait(&status);
	}
}
