#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *@s: point to int
 * Return: Always i.
 */
int _strlen(char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
