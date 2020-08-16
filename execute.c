#include "holberton.h"

void _execute(char **command)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
		//return (1);
	}

	/*while (command[i] != NULL)
	{
		printf("token[%i] = %s\n", i, command[i]);
		i++;
	}*/

	if (pid == 0)
	{
		execve(command[0], command, NULL);
	}
	else
	{
		wait(&status);
	}
}
