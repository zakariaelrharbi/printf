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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					{
						char *str = va_arg(args, char *);

						if (str == NULL)
							count += print_string("(null)");
						else
							count += print_string(str);
						break;
					}
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
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
