#include "holberton.h"
/**
 * _execute - gets command line tokens and executes when possible
 * @command: tokens obtaind from command line
*/

void _execute(char **command)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
	}

	if (pid == 0)
	{
		execve(command[0], command, NULL);
	}
	else
	{
		wait(&status);
	}
}
