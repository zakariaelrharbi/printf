#include "main.h"

/**
 * _printf - helper function
 * @format: The format string containing the conversion specifiers.
 * Conversion specifiers supported: %c, %s, %%, %r, %d, %i.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{

	Specifier_t n[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%r", printReversedString},
		{"%d", print_int},
		{"%i", print_int},
		{"%b", print_binary},
	};
	va_list args;
	int i = 0, j, len = 0;
	int match = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		match = 0;
		for (j = 6; j >= 0; j--)
		{
			if (n[j].sp[0] == format[i] && n[j].sp[1] == format[i + 1])
			{
				len += n[j].p(args);
				i += 2;
				match = 1;
				break;
			}
		}
		if (!match)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
