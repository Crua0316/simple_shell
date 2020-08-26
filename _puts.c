#include "holberton.h"
/**
 * _puts - prints out character by character what a string.
 * @str: pointer to the string.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
