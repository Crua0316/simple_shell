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
		if (!buffer)
			printf("hello");
		argu = tokens(buffer);
		check_input(argu);
		argu[0] = _inicio(argu[0]);
		_execute(argu);
		free_all(2, buffer, argu);
		/*free(argu[0]);*/
	}
	return (0);
}
