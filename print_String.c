#include "main.h"

/**
 * print_string - Prints a string and returns the number of characters printed.
 * @args: A va_list containing the variable argument list.
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		return (_puts("(null)"));

	return (_puts(s));
}
