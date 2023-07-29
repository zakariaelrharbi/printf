#include "main.h"

/**
 * printReversedString - Prints the characters of a string in reverse order.
 * @args: A va_list containing the variable argument list.
 *
 * Return: The number of characters printed.
 */
int printReversedString(va_list args)
{
	char *str = va_arg(args, char*);
	int i, j = 0;

	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}

	j = _strlen(str);
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);

	return (j);
}
