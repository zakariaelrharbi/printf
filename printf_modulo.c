#include "main.h"
#include<stdarg.h>
/**
 * print_percent - prints a single modulo '%'.
 * @args: the va_list
 * 
 * return: the number of char printed.
*/
int print_percent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
