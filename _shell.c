#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - executes initial functions to run the mini shell
 * Return: 0
*/
int main(void)
{
	char *buffer, **argu;

	while (1)
	{
		buffer = prompt();
		argu = tokens(buffer);
		_execute(argu);
		free_all(2, buffer, argu);
	}
	return (0);
}
