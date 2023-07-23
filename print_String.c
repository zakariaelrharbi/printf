#include "main.h"

/**
 * print_string - Prints a string and returns the number of characters printed.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
	int i, len;

	len = 0;
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[len]);
		return (len);
	}
}
