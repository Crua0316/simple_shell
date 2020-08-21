#include "holberton.h"
/**
 * _strcpy - copies a string into another space.
 * @src: pointer to the former string to copy.
 * @dest: pointer to the final string destination.
 * Return: Pointer to the copied string.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
