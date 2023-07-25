#include "main.h"

/**
 * printReversedString - Prints the characters of a string in reverse order.
 * @args: A va_list containing the variable argument list.
 *
 * Return: none
 */
int printReversedString(va_list args)
{
	char *str = va_arg(args, char*);
	int i, j = 0;

if (str == NULL)
	str = "(null)";
while (str[j] != '\0')
	j++;
for (i = j - 1; j >= 0; i--)
	_putchar(str[i]);
return (j);
}
