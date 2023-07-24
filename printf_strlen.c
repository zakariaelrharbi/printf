#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *@args : point to int
 * Return: Always i.
 */
int _strlen(va_list args)
{
	const char *s = va_arg(args, const char*);
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
