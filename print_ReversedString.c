#include "main.h"

/**
 * printReversedString - Prints the characters of a string in reverse order.
 * @args: A va_list containing the variable argument list.
 *
 * Return : none
 */
void printReversedString(va_list args)
{
	const char *str = va_arg(args, const char*);
	int len = _strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
}
