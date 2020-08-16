#include "holberton.h"

void free_all(const unsigned int n, ...)
{
	va_list init;
	unsigned int i;
	char *buff;

	va_start(init, n);
	i = 0;

	while (i < n)
	{
		buff = va_arg(init, char *);
		if (!buff)
		{
			continue;
		}
		free(buff);
		i++;
	}
}
