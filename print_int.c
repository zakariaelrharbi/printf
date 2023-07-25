#include "main.h"

/**
 * print_integer - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */


int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int digit, div = 1;

	if (num == -2147483648)
	return (print_string("-2147483648"));

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

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		count++;
		num %= div;
		div /= 10;
	}

	return (count);
}
