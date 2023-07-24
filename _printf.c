#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: The variable arguments.
 * Return: The number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	Specifier spec[] = {
		{'c', printf_char},
		{'s', print_string},
		{'%', print_percent},
		{'r', printReversedString},
		{'d', print_decimal},
		{'i', print_integer},
	};
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (size_t i = 0; i < sizeof(spec) / sizeof(spec[0]); i++)
			{
				if (*format == spec[i].specifier)
				{
					count += spec[i].printer(args);
					break;
				}
			}
		}
			else
			{
				_putchar(*format);
				count++;
			}
			format++;
	}
	va_end(args);
	return (count);
}
