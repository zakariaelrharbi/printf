#include "main.h"

/**
 * print_string - Prints a string and returns the number of characters printed.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
	int i, len;
	char *nullstr;

	nullstr = "(null)";
	len = 0;
	if (str == NULL)
	{
		for (i = 0; nullstr[i] != '\0'; i++)
			_putchar(nullstr[i]);
		return (6);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (len);
	}
}
