#include "main.h"
/**
 * print_decimal - Prints a decimal integer.
 * @args: The va_list containing the decimal integer argument.
 * Return: The number of characters printed.
 */
int print_decimal(va_list args)
{
	int64_t num = va_arg(args, int);
	int count = 0;
	int div = 1;
	int digit;
	int tmp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (tmp != 0)
	{
		tmp /= 10;
		div *= 10;
	}

	while (div > 1)
	{
		div /= 10;
		digit = num / div;
		_putchar(digit + '0');
		count++;
		num %= div;
	}

	return (count);
}
