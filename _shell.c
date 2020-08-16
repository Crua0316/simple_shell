#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "holberton.h"

int main()
{
	char *prom, **argu;

	prom = prompt();
	printf("Buffer, input till now is: %s\n", prom);
	argu = tokens(prom);
	free_all(2, prom, argu);
	return (0);
}
