#include "main.h"
/**
 * print_char -  function used to print a single character from the variable
* argument list (va_list).
 * @args: The variable argument list.
 * Return: The number of characters printed.
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
