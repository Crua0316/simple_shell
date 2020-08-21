#include "holberton.h"
/**
 *  check_build - Checks if command is a built_in 
 *  @argv: double pointer indicating the array of strings from where
 *  to find the command.
*/
void (*check_build(char **argv))(char **argv)
{
	int i, j;
	build_t F[] = {
		{"exit", myexit},
		{"env", _env},
		{NULL, NULL}
	};
	for (i = 0; F[i].function_name; i++)
	{
		j = 0;
		if (F[i].function_name[j] == argv[0][j])
		{
			for (j = 0; argv[0][j]; j++)
			{
				if (argv[0][j] != F[i].function_name[j])
					break;
			}
			if (!argv[0][j])
				return (F[i].function);
		}
	}
	return (NULL);
}
