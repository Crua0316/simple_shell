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
			_puts(" :Error");

		argu = tokens(buffer);

		if (argu == NULL)
			continue;

		check_input(argu);
		argu[0] = _inicio(argu[0]);
		if (argu[0] == NULL)
		{
			continue;
		}

		_execute(argu);

		free_all(2, buffer, argu);
		/*free(argu[0]);*/
	}
	return (0);
}
